module;

#define OLC_PGE_APPLICATION
#define OLC_GFX_OPENGL33
#include <olcPixelGameEngine.h>

export module olc;

export namespace olc
{
    using ::olc::v_2d;
    using ::olc::vi2d;
    using ::olc::vu2d;
    using ::olc::vf2d;
    using ::olc::vd2d;

    using ::olc::nMouseButtons;
    using ::olc::nDefaultAlpha;
    using ::olc::nDefaultPixel;
    using ::olc::nTabSizeInSpaces;
    using ::olc::OLC_MAX_VERTS;
    using ::olc::rcode;

    using ::olc::Pixel;
    using ::olc::GREY;
    using ::olc::DARK_GREY;
    using ::olc::VERY_DARK_GREY;
    using ::olc::RED;
    using ::olc::DARK_RED;
    using ::olc::VERY_DARK_RED;
    using ::olc::YELLOW;
    using ::olc::DARK_YELLOW;
    using ::olc::VERY_DARK_YELLOW;
    using ::olc::GREEN;
    using ::olc::DARK_GREEN;
    using ::olc::VERY_DARK_GREEN;
    using ::olc::CYAN;
    using ::olc::DARK_CYAN;
    using ::olc::VERY_DARK_CYAN;
    using ::olc::BLUE;
    using ::olc::DARK_BLUE;
    using ::olc::VERY_DARK_BLUE;
    using ::olc::MAGENTA;
    using ::olc::DARK_MAGENTA;
    using ::olc::VERY_DARK_MAGENTA;
    using ::olc::WHITE;
    using ::olc::BLACK;
    using ::olc::BLANK;

    using ::olc::Key;
    using ::olc::Mouse::LEFT;
    using ::olc::Mouse::RIGHT;
    using ::olc::Mouse::MIDDLE;

    using ::olc::HWButton;
    using ::olc::ResourceBuffer;
    using ::olc::ResourcePack;
    using ::olc::ImageLoader;
    using ::olc::Sprite;
    using ::olc::Decal;
    using ::olc::DecalMode;
    using ::olc::DecalStructure;
    using ::olc::Renderable;
    using ::olc::DecalInstance;
    using ::olc::CullMode;
    using ::olc::GPUTask;
    using ::olc::LayerDesc;
    using ::olc::Renderer;
    using ::olc::Platform;
    using ::olc::PixelGameEngine;
    using ::olc::PGEX;
}
