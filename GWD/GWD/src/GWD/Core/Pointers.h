#pragma once

#include <memory>

namespace GWD
{
	template<typename T>
	using PU = std::unique_ptr<T>;
	template<typename T, typename ...Args>
	constexpr PU<T> NewPU(Args&& ...args)
	{
		return std::make_unique<T>(std::forward<Args>(args)...);
	}

	template<typename T>
	using PS = std::shared_ptr<T>;
	template<typename T, typename ...Args>
	constexpr PS<T> NewPS(Args&& ...args)
	{
		return std::make_shared<T>(std::forward<Args>(args)...);
	}
}