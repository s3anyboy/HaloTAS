#pragma once

#include <cinttypes>
#include <vector>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>

// Utility to get an enum value as the underlying type
template <typename E>
constexpr auto to_underlying(E e) noexcept
{
	return static_cast<std::underlying_type_t<E>>(e);
}

namespace halo1 {

	namespace constants {
		static const float CAMERA_PITCH_MIN = -1.492f;
		static const float CAMERA_PITCH_MAX = 1.492f;
		static const float CAMERA_YAW_MIN = 0.0f;
		static const float CAMERA_YAW_MAX = glm::pi<float>() * 2.0f;
	}

	enum class MAP {
		PILLAR_OF_AUTUMN,
		HALO,
		TRUTH_AND_RECONCILIATION,
		SILENT_CARTOGRAPHER,
		ASSAULT_ON_THE_CONTROL_ROOM,
		_343_GUILTY_SPARK,
		LIBRARY,
		TWO_BETRAYALS,
		KEYES,
		MAW,
		UI_MAIN_MENU,
		UNKNOWN_MAP
	};

	enum class DIFFICULTY : uint8_t {
		EASY,
		NORMAL,
		HEROIC,
		LEGENDARY,
		INVALID_DIFFICULTY
	};

	// KEYS is a layout of the keyboard keys in Halo's memory (one unsigned byte per key)
	// When held, each key increments by 1 for each frame up to the max of 255
	enum class KEYS : uint8_t {
		ESC = 0,
		F1,
		F2,
		F3,
		F4,
		F5,
		F6,
		F7,
		F8,
		F9,
		F10,
		F11,
		F12,
		PrntScrn,
		ScrollLock,
		PauseBreak,
		Tilde,
		N_1,
		N_2,
		N_3,
		N_4,
		N_5,
		N_6,
		N_7,
		N_8,
		N_9,
		N_0,
		Minus,
		Equal,
		Backspace,
		Tab,
		Q,
		W,
		E,
		R,
		T,
		Y,
		U,
		I,
		O,
		P,
		LeftBracket,
		RightBracket,
		Pipe,
		CapsLock,
		A,
		S,
		D,
		F,
		G,
		H,
		J,
		K,
		L,
		Colon,
		Quote,
		Enter,
		LShift,
		Z,
		X,
		C,
		V,
		B,
		N,
		M,
		Comma,
		Period,
		ForwardSlash,
		RShift,
		LCtrl,
		LWin,
		LAlt,
		Space,
		RAlt,
		RWin,
		KeyThatLiterallyNoOneHasEverUsed,
		RCtrl,
		Up,
		Down,
		Left,
		Right,
		Insert,
		Home,
		PageUp,
		Delete,
		End,
		PageDown,
		NumLock,
		NUMPAD_Div,
		NUMPAD_Mul,
		NUMPAD_0,
		NUMPAD_1,
		NUMPAD_2,
		NUMPAD_3,
		NUMPAD_4,
		NUMPAD_5,
		NUMPAD_6,
		NUMPAD_7,
		NUMPAD_8,
		NUMPAD_9,
		NUMPAD_Minus,
		NUMPAD_Plus,
		NUMPAD_Enter,
		NUMPAD_Period,

		KEY_COUNT
	};

	// A subset of KEYS that only contains the most commonly used keys
	const std::vector<KEYS> COMMON_KEYS{
		KEYS::W,
		KEYS::A,
		KEYS::S,
		KEYS::D,
		KEYS::E,
		KEYS::R,
		KEYS::F,
		KEYS::G,
		KEYS::Z,
		KEYS::Tab,
		KEYS::Space,
		KEYS::LCtrl,
		KEYS::LShift,
		KEYS::Q
	};

	enum class COMMON_KEYS : uint8_t {
		W = to_underlying(KEYS::W),
		A = to_underlying(KEYS::A),
		S = to_underlying(KEYS::S),
		D = to_underlying(KEYS::D),

		E = to_underlying(KEYS::E),
		R = to_underlying(KEYS::R),
		F = to_underlying(KEYS::F),
		G = to_underlying(KEYS::G),
		Z = to_underlying(KEYS::Z),
		Tab = to_underlying(KEYS::Tab),
		Space = to_underlying(KEYS::Space),
		LCtrl = to_underlying(KEYS::LCtrl),
		LShift = to_underlying(KEYS::LShift),
		Q = to_underlying(KEYS::Q),
	};

	// Text to display for KEYS codes
	inline extern const std::string KEYS_TO_STRING[] = {
		"ESC",
		"F1",
		"F2",
		"F3",
		"F4",
		"F5",
		"F6",
		"F7",
		"F8",
		"F9",
		"F10",
		"F11",
		"F12",
		"PrntScrn",
		"ScrollLock",
		"PauseBreak",
		"Tilde",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9",
		"0",
		"Minus",
		"Equal",
		"Backspace",
		"Tab",
		"Q",
		"W",
		"E",
		"R",
		"T",
		"Y",
		"U",
		"I",
		"O",
		"P",
		"[",
		"]",
		"|",
		"CapsLock",
		"A",
		"S",
		"D",
		"F",
		"G",
		"H",
		"J",
		"K",
		"L",
		"Colon",
		"Quote",
		"Enter",
		"LShift",
		"Z",
		"X",
		"C",
		"V",
		"B",
		"N",
		"M",
		",",
		".",
		"/",
		"RShift",
		"LCtrl",
		"LWin",
		"LAlt",
		"Space",
		"RAlt",
		"RWin",
		"Menu",
		"RCtrl",
		"Up",
		"Down",
		"Left",
		"Right",
		"Insert",
		"Home",
		"PageUp",
		"Delete",
		"End",
		"PageDown",
		"NumLock",
		"NUM_/",
		"NUM_*",
		"NUM_0",
		"NUM_1",
		"NUM_2",
		"NUM_3",
		"NUM_4",
		"NUM_5",
		"NUM_6",
		"NUM_7",
		"NUM_8",
		"NUM_9",
		"NUM_-",
		"NUM_+",
		"NUM_ENTER",
		"NUM_."
	};
}
