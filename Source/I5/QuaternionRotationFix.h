// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuaternionRotationFix.generated.h"

/**
 * 
 */
UCLASS()
class I5_API UQuaternionRotationFix : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

    // Convert Euler Rotations To Quaternions
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Euler To Quaternion", Keywords = "rotation, quaterion"), Category = "Quaternion Rotation")
        static FQuat Euler_To_Quaternion(FRotator Current_Rotation);

    // Function to set world rotation of scene component to input quaternion rotation
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set World Rotation (Quaterion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void SetWorldRotationQuat(USceneComponent* SceneComponent, const FQuat& Desired_Rotation);

    // Function to set relative rotation of scene component to input quaternion rotation
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Relative Rotation (Quaterion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void SetRelativeRotationQuat(USceneComponent* SceneComponent, const FQuat& Desired_Rotation);

    // Function to add delta rotation to current local rotation of scene component
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Local Rotation (Quaterion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void AddLocalRotationQuat(USceneComponent* SceneComponent, const FQuat& Delta_Rotation);

    // Function to set world rotation of Actor to input quaternion rotation
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Actor World Rotation (Quaternion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void SetActorWorldRotationQuat(AActor* Actor, const FQuat& Desired_Rotation);

    // Function to set relative rotation of Actor to input quaternion rotation
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Set Actor Relative Rotation (Quaternion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void SetActorRelativeRotationQuat(AActor* Actor, const FQuat& Desired_Rotation);

    // Function to add delta rotation to current local rotation of Actor
    UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Actor Local Rotation (Quaternion)", Keywords = "rotation, quaternion"), Category = "Quaternion Rotation")
        static void AddActorLocalRotationQuat(AActor* Actor, const FQuat& Delta_Rotation);
};
