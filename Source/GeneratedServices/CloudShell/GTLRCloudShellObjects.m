// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Shell API (cloudshell/v1)
// Description:
//   Allows users to start, configure, and connect to interactive shell sessions
//   running in the cloud.
// Documentation:
//   https://cloud.google.com/shell/docs/

#import "GTLRCloudShellObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudShell_Environment.size
NSString * const kGTLRCloudShell_Environment_Size_Boosted      = @"BOOSTED";
NSString * const kGTLRCloudShell_Environment_Size_Default      = @"DEFAULT";
NSString * const kGTLRCloudShell_Environment_Size_VmSizeUnspecified = @"VM_SIZE_UNSPECIFIED";

// GTLRCloudShell_Environment.state
NSString * const kGTLRCloudShell_Environment_State_Disabled    = @"DISABLED";
NSString * const kGTLRCloudShell_Environment_State_Running     = @"RUNNING";
NSString * const kGTLRCloudShell_Environment_State_Starting    = @"STARTING";
NSString * const kGTLRCloudShell_Environment_State_StateUnspecified = @"STATE_UNSPECIFIED";

// GTLRCloudShell_PublicKey.format
NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp256 = @"ECDSA_SHA2_NISTP256";
NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp384 = @"ECDSA_SHA2_NISTP384";
NSString * const kGTLRCloudShell_PublicKey_Format_EcdsaSha2Nistp521 = @"ECDSA_SHA2_NISTP521";
NSString * const kGTLRCloudShell_PublicKey_Format_FormatUnspecified = @"FORMAT_UNSPECIFIED";
NSString * const kGTLRCloudShell_PublicKey_Format_SshDss       = @"SSH_DSS";
NSString * const kGTLRCloudShell_PublicKey_Format_SshRsa       = @"SSH_RSA";

// GTLRCloudShell_StartEnvironmentMetadata.state
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_AwaitingComputeResources = @"AWAITING_COMPUTE_RESOURCES";
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_AwaitingVm = @"AWAITING_VM";
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_Finished = @"FINISHED";
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_Starting = @"STARTING";
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_StateUnspecified = @"STATE_UNSPECIFIED";
NSString * const kGTLRCloudShell_StartEnvironmentMetadata_State_UnarchivingDisk = @"UNARCHIVING_DISK";

// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_CancelOperationRequest
//

@implementation GTLRCloudShell_CancelOperationRequest
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Empty
//

@implementation GTLRCloudShell_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Environment
//

@implementation GTLRCloudShell_Environment
@dynamic dockerImage, identifier, name, publicKeys, size, sshHost, sshPort,
         sshUsername, state, vmSizeExpireTime, webHost, webPorts;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"identifier" : @"id" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"publicKeys" : [GTLRCloudShell_PublicKey class],
    @"webPorts" : [NSNumber class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_ListOperationsResponse
//

@implementation GTLRCloudShell_ListOperationsResponse
@dynamic nextPageToken, operations;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"operations" : [GTLRCloudShell_Operation class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"operations";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Operation
//

@implementation GTLRCloudShell_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Operation_Metadata
//

@implementation GTLRCloudShell_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Operation_Response
//

@implementation GTLRCloudShell_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_PublicKey
//

@implementation GTLRCloudShell_PublicKey
@dynamic format, key, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_StartEnvironmentMetadata
//

@implementation GTLRCloudShell_StartEnvironmentMetadata
@dynamic state;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_StartEnvironmentResponse
//

@implementation GTLRCloudShell_StartEnvironmentResponse
@dynamic environment;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Status
//

@implementation GTLRCloudShell_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudShell_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudShell_Status_Details_Item
//

@implementation GTLRCloudShell_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end
