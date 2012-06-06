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
	uniform vec2 aspect;
	uniform vec4 rnd;
	uniform vec2 mouse;
	uniform float time;

void main(void) {

	vec2 lightSize=vec2(4.);

	// grabbing the blurred gradients
	vec2 d = pixelSize*2.;
	vec4 dx = (texture2D(sampler_blur, pixel + vec2(1,0)*d) - texture2D(sampler_blur, pixel - vec2(1,0)*d))*0.5;
	vec4 dy = (texture2D(sampler_blur, pixel + vec2(0,1)*d) - texture2D(sampler_blur, pixel - vec2(0,1)*d))*0.5;

	// adding the pixel gradients
	d = pixelSize*1.;
	dx += texture2D(sampler_prev, pixel + vec2(1,0)*d) - texture2D(sampler_prev, pixel - vec2(1,0)*d);
	dy += texture2D(sampler_prev, pixel + vec2(0,1)*d) - texture2D(sampler_prev, pixel - vec2(0,1)*d);

	vec2 displacement = vec2(dx.x,dy.x)*lightSize; // using only the red gradient as displacement vector
	float light = pow(max(1.-distance(0.5+(pixel-0.5)*aspect*lightSize + displacement,0.5+(mouse-0.5)*aspect*lightSize),0.),4.);
//	vec4 rd = 0.85-(1.-texture2D(sampler_prev,pixel-vec2(dx.x,dy.x)*pixelSize*2.5).x) + light*0.18;
	//rd = mix(rd, 1., light*(1.-texture2D(sampler_blur,pixel-vec2(dx.x,dy.x)*pixelSize*4.)).x); 

	// recoloring the lit up red channel
	vec4 rd = vec4(texture2D(sampler_prev,pixel+vec2(dx.x,dy.x)*pixelSize*8.).x)*vec4(0.7,1.5,2.0,1.0)-vec4(0.3,1.0,1.0,1.0);
	gl_FragColor = mix(rd,vec4(8.0,6.,2.,1.), light*0.75*vec4(1.-texture2D(sampler_prev,pixel+vec2(dx.x,dy.x)*pixelSize*8.).x)); 
	
	//gl_FragColor = texture2D(sampler_prev, pixel); // bypass
	gl_FragColor.a = 1.;
}