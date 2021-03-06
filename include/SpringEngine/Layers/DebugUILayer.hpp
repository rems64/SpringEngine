#pragma once

#include <SpringEngine/Core/Layer.hpp>
#include <SpringEngine/Misc/Logger.hpp>

namespace SE
{
	class DebugUILayer : public Layer
	{
	public:
		DebugUILayer(const char* name);
		~DebugUILayer() = default;

		virtual void onAttach() override;
		virtual void onDetach() override;
		virtual void onEvent(Event & event) override;
		virtual void onImGuiRender() override;


	private:
		float m_frameRateOverTime[50];
		double m_lastHistogramUpdate;
	};
}