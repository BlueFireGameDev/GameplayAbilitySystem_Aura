// Copyright BlueFireGames Dev


#include "AuraAssetManager.h"
#include "AbilitySystemGlobals.h"
#include "AuraGamePlayTags.h"

UAuraAssetManager& UAuraAssetManager::Get()
{

	check(GEngine);
	UAuraAssetManager* AuraAssetManager = Cast<UAuraAssetManager>(GEngine->AssetManager);
	return *AuraAssetManager;
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FAuraGameplayTags::InitializeNativeGameplayTags();
	// This is required to use Target data
	UAbilitySystemGlobals::Get().InitGlobalData();
	
}
