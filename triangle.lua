local ffi = require 'ffi'
local bit = require 'bit'
local fs = require 'fs'
local setInterval = require('timer').setInterval

ffi.cdef(fs.readFileSync(__dirname .. "/manual.h"))
ffi.cdef(fs.readFileSync(__dirname .. "/generated.h"))

local sdl = ffi.load("/usr/lib/x86_64-linux-gnu/libSDL.so")
local gles = ffi.load("/usr/lib/x86_64-linux-gnu/libGLESv2.so")

sdl.SDL_Init(sdl.SDL_INIT_VIDEO)
sdl.SDL_GL_SetAttribute(sdl.SDL_GL_DOUBLEBUFFER, 1)

--local screen = sdl.SDL_SetVideoMode(0, 0, 0, bit.bor(sdl.SDL_OPENGL, sdl.SDL_FULLSCREEN))
local screen = sdl.SDL_SetVideoMode(640, 480, 0, sdl.SDL_OPENGL)
sdl.SDL_WM_SetCaption("Triangle", "Triangle")


local event = ffi.new("SDL_Event")

setInterval(1000 / 60, function ()
  while sdl.SDL_PollEvent(event) > 0 do
    p(event)
    if (event.type == sdl.SDL_QUIT) or
       (event.type == sdl.SDL_KEYDOWN and (
         event.key.keysym.sym == sdl.SDLK_ESCAPE or
         (event.key.keysym.sym == sdl.SDLK_c and event.key.keysym.mod == sdl.KMOD_LCTRL)
       )) then
      process.exit()
    end
  end
  sdl.SDL_GL_SwapBuffers()
end)

gles.glViewport(0, 0, screen.w, screen.h)

