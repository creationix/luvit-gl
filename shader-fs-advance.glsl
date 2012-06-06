#ifdef GL_ES
precision highp float;
#endif

	uniform sampler2D sampler_prev;
	uniform sampler2D sampler_prev_n;
	uniform sampler2D sampler_blur;
	uniform sampler2D sampler_noise;
	uniform sampler2D sampler_noise_n;

	varying vec2 pixel;
	uniform vec2 pixelSize;
	uniform vec4 rnd;
	uniform vec2 mouse;
	uniform float time;
	uniform float fps;

void main(void) {
	// grabbing the blurred gradients
	vec2 d = pixelSize*4.;
	vec4 dx = (texture2D(sampler_blur, pixel + vec2(1,0)*d) - texture2D(sampler_blur, pixel - vec2(1,0)*d))*0.5;
	vec4 dy = (texture2D(sampler_blur, pixel + vec2(0,1)*d) - texture2D(sampler_blur, pixel - vec2(0,1)*d))*0.5;
	
	vec2 zoom_in = pixel + vec2(dx.x,dy.x)*pixelSize*8.; // adding the traveling wave front
	vec2 rand_noise = texture2D(sampler_noise, zoom_in + vec2(rnd.x, rnd.y)).xy;
	gl_FragColor.x = texture2D(sampler_prev, zoom_in).x + (rand_noise.x-0.5)*0.0025 - 0.002; // decay with error diffusion
	gl_FragColor.x -= (texture2D(sampler_blur, zoom_in + (rand_noise-0.5)*pixelSize).x -
					  texture2D(sampler_prev, zoom_in + (rand_noise-0.5)*pixelSize)).x*0.054; // reaction-diffusion

	gl_FragColor.a = 1.;
}