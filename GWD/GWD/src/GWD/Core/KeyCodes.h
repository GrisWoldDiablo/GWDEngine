#pragma once
#include <ostream>

namespace GWD
{
	typedef enum class KeyCode : uint16_t
	{

		// Copied from GLFW 3.4
		Space	= 32,
		Apostrophe = 39, /* ' */
		Comma = 44, /* , */
		Minus = 45, /* - */
		Period = 46, /* . */
		Slash = 47, /* / */

		D0 = 48, /* 0 */
		D1 = 49, /* 1 */
		D2 = 50, /* 2 */
		D3 = 51, /* 3 */
		D4 = 52, /* 4 */
		D5 = 53, /* 5 */
		D6 = 54, /* 6 */
		D7 = 55, /* 7 */
		D8 = 56, /* 8 */
		D9 = 57, /* 9 */

		Semicolon = 59, /* ; */
		Equal = 61, /* = */

		A = 65,
		B = 66,
		C = 67,
		D = 68,
		E = 69,
		F = 70,
		G = 71,
		H = 72,
		I = 73,
		J = 74,
		K = 75,
		L = 76,
		M = 77,
		N = 78,
		O = 79,
		P = 80,
		Q = 81,
		R = 82,
		S = 83,
		T = 84,
		U = 85,
		V = 86,
		W = 87,
		X = 88,
		Y = 89,
		Z = 90,

		LeftBracket = 91,  /* [ */
		Backslash = 92,  /* \ */
		RightBracket = 93,  /* ] */
		GraveAccent = 96,  /* ` */

		World1 = 161, /* non-US #1 */
		World2 = 162, /* non-US #2 */

		/* Function keys */
		Escape = 256,
		Enter = 257,
		Tab = 258,
		Backspace = 259,
		Insert = 260,
		Delete = 261,
		Right = 262,
		Left = 263,
		Down = 264,
		Up = 265,
		PageUp = 266,
		PageDown = 267,
		Home = 268,
		End = 269,
		CapsLock = 280,
		ScrollLock = 281,
		NumLock = 282,
		PrintScreen = 283,
		Pause = 284,
		F1 = 290,
		F2 = 291,
		F3 = 292,
		F4 = 293,
		F5 = 294,
		F6 = 295,
		F7 = 296,
		F8 = 297,
		F9 = 298,
		F10 = 299,
		F11 = 300,
		F12 = 301,
		F13 = 302,
		F14 = 303,
		F15 = 304,
		F16 = 305,
		F17 = 306,
		F18 = 307,
		F19 = 308,
		F20 = 309,
		F21 = 310,
		F22 = 311,
		F23 = 312,
		F24 = 313,
		F25 = 314,

		/* Keypad */
		KP0 = 320,
		KP1 = 321,
		KP2 = 322,
		KP3 = 323,
		KP4 = 324,
		KP5 = 325,
		KP6 = 326,
		KP7 = 327,
		KP8 = 328,
		KP9 = 329,
		KPDecimal = 330,
		KPDivide = 331,
		KPMultiply = 332,
		KPSubtract = 333,
		KPAdd = 334,
		KPEnter = 335,
		KPEqual = 336,

		LeftShift = 340,
		LeftControl = 341,
		LeftAlt = 342,
		LeftSuper = 343,
		RightShift = 344,
		RightControl = 345,
		RightAlt = 346,
		RightSuper = 347,
		Menu = 348
	} Key;

	inline std::ostream& operator<<(std::ostream& os, KeyCode keyCode)
	{
		os << static_cast<int32_t>(keyCode);
		return os;
	}
}

// Copied from GLFW 3.4
#define GWD_KEY_SPACE           ::GWD::Key::Space
#define GWD_KEY_APOSTROPHE      ::GWD::Key::Apostrophe    /* ' */
#define GWD_KEY_COMMA           ::GWD::Key::Comma         /* , */
#define GWD_KEY_MINUS           ::GWD::Key::Minus         /* - */
#define GWD_KEY_PERIOD          ::GWD::Key::Period        /* . */
#define GWD_KEY_SLASH           ::GWD::Key::Slash         /* / */
#define GWD_KEY_0               ::GWD::Key::D0
#define GWD_KEY_1               ::GWD::Key::D1
#define GWD_KEY_2               ::GWD::Key::D2
#define GWD_KEY_3               ::GWD::Key::D3
#define GWD_KEY_4               ::GWD::Key::D4
#define GWD_KEY_5               ::GWD::Key::D5
#define GWD_KEY_6               ::GWD::Key::D6
#define GWD_KEY_7               ::GWD::Key::D7
#define GWD_KEY_8               ::GWD::Key::D8
#define GWD_KEY_9               ::GWD::Key::D9
#define GWD_KEY_SEMICOLON       ::GWD::Key::Semicolon     /* ; */
#define GWD_KEY_EQUAL           ::GWD::Key::Equal         /* = */
#define GWD_KEY_A               ::GWD::Key::A
#define GWD_KEY_B               ::GWD::Key::B
#define GWD_KEY_C               ::GWD::Key::C
#define GWD_KEY_D               ::GWD::Key::D
#define GWD_KEY_E               ::GWD::Key::E
#define GWD_KEY_F               ::GWD::Key::F
#define GWD_KEY_G               ::GWD::Key::G
#define GWD_KEY_H               ::GWD::Key::H
#define GWD_KEY_I               ::GWD::Key::I
#define GWD_KEY_J               ::GWD::Key::J
#define GWD_KEY_K               ::GWD::Key::K
#define GWD_KEY_L               ::GWD::Key::L
#define GWD_KEY_M               ::GWD::Key::M
#define GWD_KEY_N               ::GWD::Key::N
#define GWD_KEY_O               ::GWD::Key::O
#define GWD_KEY_P               ::GWD::Key::P
#define GWD_KEY_Q               ::GWD::Key::Q
#define GWD_KEY_R               ::GWD::Key::R
#define GWD_KEY_S               ::GWD::Key::S
#define GWD_KEY_T               ::GWD::Key::T
#define GWD_KEY_U               ::GWD::Key::U
#define GWD_KEY_V               ::GWD::Key::V
#define GWD_KEY_W               ::GWD::Key::W
#define GWD_KEY_X               ::GWD::Key::X
#define GWD_KEY_Y               ::GWD::Key::Y
#define GWD_KEY_Z               ::GWD::Key::Z
#define GWD_KEY_LEFT_BRACKET    ::GWD::Key::LeftBracket   /* [ */
#define GWD_KEY_BACKSLASH       ::GWD::Key::Backslash     /* \ */
#define GWD_KEY_RIGHT_BRACKET   ::GWD::Key::RightBracket  /* ] */
#define GWD_KEY_GRAVE_ACCENT    ::GWD::Key::GraveAccent   /* ` */
#define GWD_KEY_WORLD_1         ::GWD::Key::World1        /* non-US #1 */
#define GWD_KEY_WORLD_2         ::GWD::Key::World2        /* non-US #2 */

/* Function keys */
#define GWD_KEY_ESCAPE          ::GWD::Key::Escape
#define GWD_KEY_ENTER           ::GWD::Key::Enter
#define GWD_KEY_TAB             ::GWD::Key::Tab
#define GWD_KEY_BACKSPACE       ::GWD::Key::Backspace
#define GWD_KEY_INSERT          ::GWD::Key::Insert
#define GWD_KEY_DELETE          ::GWD::Key::Delete
#define GWD_KEY_RIGHT           ::GWD::Key::Right
#define GWD_KEY_LEFT            ::GWD::Key::Left
#define GWD_KEY_DOWN            ::GWD::Key::Down
#define GWD_KEY_UP              ::GWD::Key::Up
#define GWD_KEY_PAGE_UP         ::GWD::Key::PageUp
#define GWD_KEY_PAGE_DOWN       ::GWD::Key::PageDown
#define GWD_KEY_HOME            ::GWD::Key::Home
#define GWD_KEY_END             ::GWD::Key::End
#define GWD_KEY_CAPS_LOCK       ::GWD::Key::CapsLock
#define GWD_KEY_SCROLL_LOCK     ::GWD::Key::ScrollLock
#define GWD_KEY_NUM_LOCK        ::GWD::Key::NumLock
#define GWD_KEY_PRINT_SCREEN    ::GWD::Key::PrintScreen
#define GWD_KEY_PAUSE           ::GWD::Key::Pause
#define GWD_KEY_F1              ::GWD::Key::F1
#define GWD_KEY_F2              ::GWD::Key::F2
#define GWD_KEY_F3              ::GWD::Key::F3
#define GWD_KEY_F4              ::GWD::Key::F4
#define GWD_KEY_F5              ::GWD::Key::F5
#define GWD_KEY_F6              ::GWD::Key::F6
#define GWD_KEY_F7              ::GWD::Key::F7
#define GWD_KEY_F8              ::GWD::Key::F8
#define GWD_KEY_F9              ::GWD::Key::F9
#define GWD_KEY_F10             ::GWD::Key::F10
#define GWD_KEY_F11             ::GWD::Key::F11
#define GWD_KEY_F12             ::GWD::Key::F12
#define GWD_KEY_F13             ::GWD::Key::F13
#define GWD_KEY_F14             ::GWD::Key::F14
#define GWD_KEY_F15             ::GWD::Key::F15
#define GWD_KEY_F16             ::GWD::Key::F16
#define GWD_KEY_F17             ::GWD::Key::F17
#define GWD_KEY_F18             ::GWD::Key::F18
#define GWD_KEY_F19             ::GWD::Key::F19
#define GWD_KEY_F20             ::GWD::Key::F20
#define GWD_KEY_F21             ::GWD::Key::F21
#define GWD_KEY_F22             ::GWD::Key::F22
#define GWD_KEY_F23             ::GWD::Key::F23
#define GWD_KEY_F24             ::GWD::Key::F24
#define GWD_KEY_F25             ::GWD::Key::F25

/* Keypad */
#define GWD_KEY_KP_0            ::GWD::Key::KP0
#define GWD_KEY_KP_1            ::GWD::Key::KP1
#define GWD_KEY_KP_2            ::GWD::Key::KP2
#define GWD_KEY_KP_3            ::GWD::Key::KP3
#define GWD_KEY_KP_4            ::GWD::Key::KP4
#define GWD_KEY_KP_5            ::GWD::Key::KP5
#define GWD_KEY_KP_6            ::GWD::Key::KP6
#define GWD_KEY_KP_7            ::GWD::Key::KP7
#define GWD_KEY_KP_8            ::GWD::Key::KP8
#define GWD_KEY_KP_9            ::GWD::Key::KP9
#define GWD_KEY_KP_DECIMAL      ::GWD::Key::KPDecimal
#define GWD_KEY_KP_DIVIDE       ::GWD::Key::KPDivide
#define GWD_KEY_KP_MULTIPLY     ::GWD::Key::KPMultiply
#define GWD_KEY_KP_SUBTRACT     ::GWD::Key::KPSubtract
#define GWD_KEY_KP_ADD          ::GWD::Key::KPAdd
#define GWD_KEY_KP_ENTER        ::GWD::Key::KPEnter
#define GWD_KEY_KP_EQUAL        ::GWD::Key::KPEqual

#define GWD_KEY_LEFT_SHIFT      ::GWD::Key::LeftShift
#define GWD_KEY_LEFT_CONTROL    ::GWD::Key::LeftControl
#define GWD_KEY_LEFT_ALT        ::GWD::Key::LeftAlt
#define GWD_KEY_LEFT_SUPER      ::GWD::Key::LeftSuper
#define GWD_KEY_RIGHT_SHIFT     ::GWD::Key::RightShift
#define GWD_KEY_RIGHT_CONTROL   ::GWD::Key::RightControl
#define GWD_KEY_RIGHT_ALT       ::GWD::Key::RightAlt
#define GWD_KEY_RIGHT_SUPER     ::GWD::Key::RightSuper
#define GWD_KEY_MENU            ::GWD::Key::Menu