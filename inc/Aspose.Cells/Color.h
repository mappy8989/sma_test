// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.
// Powered by Aspose.Cells.

#ifndef ASPOSE_CELLS_COLOR_H
#define ASPOSE_CELLS_COLOR_H

#include <stdint.h>

#include "Aspose.Cells/Export.h"

namespace Aspose { namespace Cells {
	/// <summary>
	/// Represents an ARGB (alpha, red, green, blue) color.
	/// </summary>
	struct ASPOSE_CELLS_API2 Color {
		uint8_t	a;
		uint8_t	r;
		uint8_t	g;
		uint8_t	b;

		static constexpr Color Black() { return { 0xff, 0x00, 0x00, 0x00 }; }
		static constexpr Color Navy() { return { 0xff, 0x00, 0x00, 0x80 }; }
		static constexpr Color DarkBlue() { return { 0xff, 0x00, 0x00, 0x8b }; }
		static constexpr Color MediumBlue() { return { 0xff, 0x00, 0x00, 0xcd }; }
		static constexpr Color Blue() { return { 0xff, 0x00, 0x00, 0xff }; }
		static constexpr Color DarkGreen() { return { 0xff, 0x00, 0x64, 0x00 }; }
		static constexpr Color Green() { return { 0xff, 0x00, 0x80, 0x00 }; }
		static constexpr Color Teal() { return { 0xff, 0x00, 0x80, 0x80 }; }
		static constexpr Color DarkCyan() { return { 0xff, 0x00, 0x8b, 0x8b }; }
		static constexpr Color DeepSkyBlue() { return { 0xff, 0x00, 0xbf, 0xff }; }
		static constexpr Color DarkTurquoise() { return { 0xff, 0x00, 0xce, 0xd1 }; }
		static constexpr Color MediumSpringGreen() { return { 0xff, 0x00, 0xfa, 0x9a }; }
		static constexpr Color Lime() { return { 0xff, 0x00, 0xff, 0x00 }; }
		static constexpr Color SpringGreen() { return { 0xff, 0x00, 0xff, 0x7f }; }
		static constexpr Color Aqua() { return { 0xff, 0x00, 0xff, 0xff }; }
		static constexpr Color Cyan() { return { 0xff, 0x00, 0xff, 0xff }; }
		static constexpr Color MidnightBlue() { return { 0xff, 0x19, 0x19, 0x70 }; }
		static constexpr Color DodgerBlue() { return { 0xff, 0x1e, 0x90, 0xff }; }
		static constexpr Color LightSeaGreen() { return { 0xff, 0x20, 0xb2, 0xaa }; }
		static constexpr Color ForestGreen() { return { 0xff, 0x22, 0x8b, 0x22 }; }
		static constexpr Color SeaGreen() { return { 0xff, 0x2e, 0x8b, 0x57 }; }
		static constexpr Color DarkSlateGray() { return { 0xff, 0x2f, 0x4f, 0x4f }; }
		static constexpr Color LimeGreen() { return { 0xff, 0x32, 0xcd, 0x32 }; }
		static constexpr Color MediumSeaGreen() { return { 0xff, 0x3c, 0xb3, 0x71 }; }
		static constexpr Color Turquoise() { return { 0xff, 0x40, 0xe0, 0xd0 }; }
		static constexpr Color RoyalBlue() { return { 0xff, 0x41, 0x69, 0xe1 }; }
		static constexpr Color SteelBlue() { return { 0xff, 0x46, 0x82, 0xb4 }; }
		static constexpr Color DarkSlateBlue() { return { 0xff, 0x48, 0x3d, 0x8b }; }
		static constexpr Color MediumTurquoise() { return { 0xff, 0x48, 0xd1, 0xcc }; }
		static constexpr Color Indigo() { return { 0xff, 0x4b, 0x00, 0x82 }; }
		static constexpr Color DarkOliveGreen() { return { 0xff, 0x55, 0x6b, 0x2f }; }
		static constexpr Color CadetBlue() { return { 0xff, 0x5f, 0x9e, 0xa0 }; }
		static constexpr Color CornflowerBlue() { return { 0xff, 0x64, 0x95, 0xed }; }
		static constexpr Color MediumAquaMarine() { return { 0xff, 0x66, 0xcd, 0xaa }; }
		static constexpr Color DimGray() { return { 0xff, 0x69, 0x69, 0x69 }; }
		static constexpr Color SlateBlue() { return { 0xff, 0x6a, 0x5a, 0xcd }; }
		static constexpr Color OliveDrab() { return { 0xff, 0x6b, 0x8e, 0x23 }; }
		static constexpr Color SlateGray() { return { 0xff, 0x70, 0x80, 0x90 }; }
		static constexpr Color LightSlateGray() { return { 0xff, 0x77, 0x88, 0x99 }; }
		static constexpr Color MediumSlateBlue() { return { 0xff, 0x7b, 0x68, 0xee }; }
		static constexpr Color LawnGreen() { return { 0xff, 0x7c, 0xfc, 0x00 }; }
		static constexpr Color Chartreuse() { return { 0xff, 0x7f, 0xff, 0x00 }; }
		static constexpr Color Aquamarine() { return { 0xff, 0x7f, 0xff, 0xd4 }; }
		static constexpr Color Maroon() { return { 0xff, 0x80, 0x00, 0x00 }; }
		static constexpr Color Purple() { return { 0xff, 0x80, 0x00, 0x80 }; }
		static constexpr Color Olive() { return { 0xff, 0x80, 0x80, 0x00 }; }
		static constexpr Color Gray() { return { 0xff, 0x80, 0x80, 0x80 }; }
		static constexpr Color SkyBlue() { return { 0xff, 0x87, 0xce, 0xeb }; }
		static constexpr Color LightSkyBlue() { return { 0xff, 0x87, 0xce, 0xfa }; }
		static constexpr Color BlueViolet() { return { 0xff, 0x8a, 0x2b, 0xe2 }; }
		static constexpr Color DarkRed() { return { 0xff, 0x8b, 0x00, 0x00 }; }
		static constexpr Color DarkMagenta() { return { 0xff, 0x8b, 0x00, 0x8b }; }
		static constexpr Color SaddleBrown() { return { 0xff, 0x8b, 0x45, 0x13 }; }
		static constexpr Color DarkSeaGreen() { return { 0xff, 0x8f, 0xbc, 0x8f }; }
		static constexpr Color LightGreen() { return { 0xff, 0x90, 0xee, 0x90 }; }
		static constexpr Color MediumPurple() { return { 0xff, 0x93, 0x70, 0xdb }; }
		static constexpr Color DarkViolet() { return { 0xff, 0x94, 0x00, 0xd3 }; }
		static constexpr Color PaleGreen() { return { 0xff, 0x98, 0xfb, 0x98 }; }
		static constexpr Color DarkOrchid() { return { 0xff, 0x99, 0x32, 0xcc }; }
		static constexpr Color YellowGreen() { return { 0xff, 0x9a, 0xcd, 0x32 }; }
		static constexpr Color Sienna() { return { 0xff, 0xa0, 0x52, 0x2d }; }
		static constexpr Color Brown() { return { 0xff, 0xa5, 0x2a, 0x2a }; }
		static constexpr Color DarkGray() { return { 0xff, 0xa9, 0xa9, 0xa9 }; }
		static constexpr Color LightBlue() { return { 0xff, 0xad, 0xd8, 0xe6 }; }
		static constexpr Color GreenYellow() { return { 0xff, 0xad, 0xff, 0x2f }; }
		static constexpr Color PaleTurquoise() { return { 0xff, 0xaf, 0xee, 0xee }; }
		static constexpr Color LightSteelBlue() { return { 0xff, 0xb0, 0xc4, 0xde }; }
		static constexpr Color PowderBlue() { return { 0xff, 0xb0, 0xe0, 0xe6 }; }
		static constexpr Color FireBrick() { return { 0xff, 0xb2, 0x22, 0x22 }; }
		static constexpr Color DarkGoldenRod() { return { 0xff, 0xb8, 0x86, 0x0b }; }
		static constexpr Color MediumOrchid() { return { 0xff, 0xba, 0x55, 0xd3 }; }
		static constexpr Color RosyBrown() { return { 0xff, 0xbc, 0x8f, 0x8f }; }
		static constexpr Color DarkKhaki() { return { 0xff, 0xbd, 0xb7, 0x6b }; }
		static constexpr Color Silver() { return { 0xff, 0xc0, 0xc0, 0xc0 }; }
		static constexpr Color MediumVioletRed() { return { 0xff, 0xc7, 0x15, 0x85 }; }
		static constexpr Color IndianRed() { return { 0xff, 0xcd, 0x5c, 0x5c }; }
		static constexpr Color Peru() { return { 0xff, 0xcd, 0x85, 0x3f }; }
		static constexpr Color Chocolate() { return { 0xff, 0xd2, 0x69, 0x1e }; }
		static constexpr Color Tan() { return { 0xff, 0xd2, 0xb4, 0x8c }; }
		static constexpr Color LightGray() { return { 0xff, 0xd3, 0xd3, 0xd3 }; }
		static constexpr Color Thistle() { return { 0xff, 0xd8, 0xbf, 0xd8 }; }
		static constexpr Color Orchid() { return { 0xff, 0xda, 0x70, 0xd6 }; }
		static constexpr Color GoldenRod() { return { 0xff, 0xda, 0xa5, 0x20 }; }
		static constexpr Color PaleVioletRed() { return { 0xff, 0xdb, 0x70, 0x93 }; }
		static constexpr Color Crimson() { return { 0xff, 0xdc, 0x14, 0x3c }; }
		static constexpr Color Gainsboro() { return { 0xff, 0xdc, 0xdc, 0xdc }; }
		static constexpr Color Plum() { return { 0xff, 0xdd, 0xa0, 0xdd }; }
		static constexpr Color BurlyWood() { return { 0xff, 0xde, 0xb8, 0x87 }; }
		static constexpr Color LightCyan() { return { 0xff, 0xe0, 0xff, 0xff }; }
		static constexpr Color Lavender() { return { 0xff, 0xe6, 0xe6, 0xfa }; }
		static constexpr Color DarkSalmon() { return { 0xff, 0xe9, 0x96, 0x7a }; }
		static constexpr Color Violet() { return { 0xff, 0xee, 0x82, 0xee }; }
		static constexpr Color PaleGoldenRod() { return { 0xff, 0xee, 0xe8, 0xaa }; }
		static constexpr Color LightCoral() { return { 0xff, 0xf0, 0x80, 0x80 }; }
		static constexpr Color Khaki() { return { 0xff, 0xf0, 0xe6, 0x8c }; }
		static constexpr Color AliceBlue() { return { 0xff, 0xf0, 0xf8, 0xff }; }
		static constexpr Color HoneyDew() { return { 0xff, 0xf0, 0xff, 0xf0 }; }
		static constexpr Color Azure() { return { 0xff, 0xf0, 0xff, 0xff }; }
		static constexpr Color SandyBrown() { return { 0xff, 0xf4, 0xa4, 0x60 }; }
		static constexpr Color Wheat() { return { 0xff, 0xf5, 0xde, 0xb3 }; }
		static constexpr Color Beige() { return { 0xff, 0xf5, 0xf5, 0xdc }; }
		static constexpr Color WhiteSmoke() { return { 0xff, 0xf5, 0xf5, 0xf5 }; }
		static constexpr Color MintCream() { return { 0xff, 0xf5, 0xff, 0xfa }; }
		static constexpr Color GhostWhite() { return { 0xff, 0xf8, 0xf8, 0xff }; }
		static constexpr Color Salmon() { return { 0xff, 0xfa, 0x80, 0x72 }; }
		static constexpr Color AntiqueWhite() { return { 0xff, 0xfa, 0xeb, 0xd7 }; }
		static constexpr Color Linen() { return { 0xff, 0xfa, 0xf0, 0xe6 }; }
		static constexpr Color LightGoldenRodYellow() { return { 0xff, 0xfa, 0xfa, 0xd2 }; }
		static constexpr Color OldLace() { return { 0xff, 0xfd, 0xf5, 0xe6 }; }
		static constexpr Color Red() { return { 0xff, 0xff, 0x00, 0x00 }; }
		static constexpr Color Fuchsia() { return { 0xff, 0xff, 0x00, 0xff }; }
		static constexpr Color Magenta() { return { 0xff, 0xff, 0x00, 0xff }; }
		static constexpr Color DeepPink() { return { 0xff, 0xff, 0x14, 0x93 }; }
		static constexpr Color OrangeRed() { return { 0xff, 0xff, 0x45, 0x00 }; }
		static constexpr Color Tomato() { return { 0xff, 0xff, 0x63, 0x47 }; }
		static constexpr Color HotPink() { return { 0xff, 0xff, 0x69, 0xb4 }; }
		static constexpr Color Coral() { return { 0xff, 0xff, 0x7f, 0x50 }; }
		static constexpr Color DarkOrange() { return { 0xff, 0xff, 0x8c, 0x00 }; }
		static constexpr Color LightSalmon() { return { 0xff, 0xff, 0xa0, 0x7a }; }
		static constexpr Color Orange() { return { 0xff, 0xff, 0xa5, 0x00 }; }
		static constexpr Color LightPink() { return { 0xff, 0xff, 0xb6, 0xc1 }; }
		static constexpr Color Pink() { return { 0xff, 0xff, 0xc0, 0xcb }; }
		static constexpr Color Gold() { return { 0xff, 0xff, 0xd7, 0x00 }; }
		static constexpr Color PeachPuff() { return { 0xff, 0xff, 0xda, 0xb9 }; }
		static constexpr Color NavajoWhite() { return { 0xff, 0xff, 0xde, 0xad }; }
		static constexpr Color Moccasin() { return { 0xff, 0xff, 0xe4, 0xb5 }; }
		static constexpr Color Bisque() { return { 0xff, 0xff, 0xe4, 0xc4 }; }
		static constexpr Color MistyRose() { return { 0xff, 0xff, 0xe4, 0xe1 }; }
		static constexpr Color BlanchedAlmond() { return { 0xff, 0xff, 0xeb, 0xcd }; }
		static constexpr Color PapayaWhip() { return { 0xff, 0xff, 0xef, 0xd5 }; }
		static constexpr Color LavenderBlush() { return { 0xff, 0xff, 0xf0, 0xf5 }; }
		static constexpr Color SeaShell() { return { 0xff, 0xff, 0xf5, 0xee }; }
		static constexpr Color Cornsilk() { return { 0xff, 0xff, 0xf8, 0xdc }; }
		static constexpr Color LemonChiffon() { return { 0xff, 0xff, 0xfa, 0xcd }; }
		static constexpr Color FloralWhite() { return { 0xff, 0xff, 0xfa, 0xf0 }; }
		static constexpr Color Snow() { return { 0xff, 0xff, 0xfa, 0xfa }; }
		static constexpr Color Yellow() { return { 0xff, 0xff, 0xff, 0x00 }; }
		static constexpr Color LightYellow() { return { 0xff, 0xff, 0xff, 0xe0 }; }
		static constexpr Color Ivory() { return { 0xff, 0xff, 0xff, 0xf0 }; }
		static constexpr Color White() { return { 0xff, 0xff, 0xff, 0xff }; }
	};

	inline bool operator==(const Aspose::Cells::Color& left, const Aspose::Cells::Color& right) {
		return left.a == right.a && left.r == right.r && left.g == right.g && left.b == right.b;
	}

	inline bool operator!=(const Aspose::Cells::Color& left, const Aspose::Cells::Color& right) {
		return !(left == right);
	}

} }

#endif
