#include "IFeature_Dx12.h"
#include "FSR2Feature.h"
#include <string>

class FSR2FeatureDx12 : public FSR2Feature, public IFeature_Dx12
{
private:

protected:

public:
	FSR2FeatureDx12(unsigned int InHandleId, const NVSDK_NGX_Parameter* InParameters) : FSR2Feature(InHandleId, InParameters), IFeature_Dx12(InHandleId, InParameters), IFeature(InHandleId, InParameters)
	{
	}

	// Inherited via IFeatureContextDx12
	bool Init(ID3D12Device* InDevice, const NVSDK_NGX_Parameter* InParameters) override;
	bool Evaluate(ID3D12GraphicsCommandList* InCommandList, const NVSDK_NGX_Parameter* InParameters) override;
	void ReInit(const NVSDK_NGX_Parameter* InParameters) override;
};