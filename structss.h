#ifndef STRUCTSS_H
#define STRUCTSS_H

struct header_s
{
    char header[4];
    unsigned char version[4];
    unsigned long doctype;//?
    unsigned long fps;
    unsigned long maxkey;
    unsigned long layernum;
    unsigned long none2[3];
};

typedef struct header_s header_t;

struct texture_s
{
    char texname[0x70];
    unsigned char texcoord[0x1c];

    //str: texname only=0x80

};

typedef struct texture_s texture_t;

struct anikey_s
{
    unsigned long frameTime;
    unsigned long frameType;  
    float pos[2];//order: x,y
    float uv[2];
    float uvs[2];
    float uv2[2];//for multiTex
    float uvs2[2];//for multiTex
    float points[8]; //order: x1,x2,x3,x4,y1,y2,y3,y4
	float tex_id;
    unsigned long aniType;//texture inc. mode
    float aniDelta;//texture delta increment
    float rotation;
    float color[4]; //rgba
    unsigned long blend[2];
	unsigned long multiTexMode;

};

typedef struct anikey_s anikey_t;


#endif // STRUCTSS_H
