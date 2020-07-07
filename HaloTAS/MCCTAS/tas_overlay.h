#pragma once
#include <d3d11.h>
#include <vector>

namespace tas::overlay {
	void initialize(IDXGISwapChain* SwapChain);
	void render();
	void shutdown();

	void add_speed_value(float speed);
}