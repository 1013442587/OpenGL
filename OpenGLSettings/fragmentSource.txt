#version 330 core                
in vec4 vertexColor;
in vec2 TexCoord;

uniform sampler2D ourTexture;
uniform sampler2D ourFace;


out vec4 FragColor;              
void main(){			
	//FragColor = vertexColor;
	FragColor = mix(texture(ourTexture, TexCoord), texture(ourFace,TexCoord), 0.2);
}