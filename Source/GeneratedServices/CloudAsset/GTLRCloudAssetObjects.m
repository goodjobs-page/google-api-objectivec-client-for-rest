// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Asset API (cloudasset/v1)
// Description:
//   The cloud asset API manages the history and inventory of cloud resources.
// Documentation:
//   https://cloud.google.com/asset-inventory/docs/quickstart

#import "GTLRCloudAssetObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRCloudAsset_AuditLogConfig.logType
NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_AdminRead = @"ADMIN_READ";
NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_DataRead = @"DATA_READ";
NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_DataWrite = @"DATA_WRITE";
NSString * const kGTLRCloudAsset_AuditLogConfig_LogType_LogTypeUnspecified = @"LOG_TYPE_UNSPECIFIED";

// GTLRCloudAsset_ExportAssetsRequest.contentType
NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_AccessPolicy = @"ACCESS_POLICY";
NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_ContentTypeUnspecified = @"CONTENT_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_IamPolicy = @"IAM_POLICY";
NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_OrgPolicy = @"ORG_POLICY";
NSString * const kGTLRCloudAsset_ExportAssetsRequest_ContentType_Resource = @"RESOURCE";

// GTLRCloudAsset_Feed.contentType
NSString * const kGTLRCloudAsset_Feed_ContentType_AccessPolicy = @"ACCESS_POLICY";
NSString * const kGTLRCloudAsset_Feed_ContentType_ContentTypeUnspecified = @"CONTENT_TYPE_UNSPECIFIED";
NSString * const kGTLRCloudAsset_Feed_ContentType_IamPolicy    = @"IAM_POLICY";
NSString * const kGTLRCloudAsset_Feed_ContentType_OrgPolicy    = @"ORG_POLICY";
NSString * const kGTLRCloudAsset_Feed_ContentType_Resource     = @"RESOURCE";

// GTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy.allValues
NSString * const kGTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy_AllValues_Allow = @"ALLOW";
NSString * const kGTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy_AllValues_AllValuesUnspecified = @"ALL_VALUES_UNSPECIFIED";
NSString * const kGTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy_AllValues_Deny = @"DENY";

// GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1BasicLevel.combiningFunction
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1BasicLevel_CombiningFunction_And = @"AND";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1BasicLevel_CombiningFunction_Or = @"OR";

// GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy.allowedDeviceManagementLevels
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedDeviceManagementLevels_Basic = @"BASIC";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedDeviceManagementLevels_Complete = @"COMPLETE";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedDeviceManagementLevels_ManagementUnspecified = @"MANAGEMENT_UNSPECIFIED";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedDeviceManagementLevels_None = @"NONE";

// GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy.allowedEncryptionStatuses
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedEncryptionStatuses_Encrypted = @"ENCRYPTED";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedEncryptionStatuses_EncryptionUnspecified = @"ENCRYPTION_UNSPECIFIED";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedEncryptionStatuses_EncryptionUnsupported = @"ENCRYPTION_UNSUPPORTED";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy_AllowedEncryptionStatuses_Unencrypted = @"UNENCRYPTED";

// GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint.osType
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_Android = @"ANDROID";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_DesktopChromeOs = @"DESKTOP_CHROME_OS";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_DesktopLinux = @"DESKTOP_LINUX";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_DesktopMac = @"DESKTOP_MAC";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_DesktopWindows = @"DESKTOP_WINDOWS";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_Ios = @"IOS";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint_OsType_OsUnspecified = @"OS_UNSPECIFIED";

// GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeter.perimeterType
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeter_PerimeterType_PerimeterTypeBridge = @"PERIMETER_TYPE_BRIDGE";
NSString * const kGTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeter_PerimeterType_PerimeterTypeRegular = @"PERIMETER_TYPE_REGULAR";

// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Asset
//

@implementation GTLRCloudAsset_Asset
@dynamic accessLevel, accessPolicy, ancestors, assetType, iamPolicy, name,
         orgPolicy, resource, servicePerimeter;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ancestors" : [NSString class],
    @"orgPolicy" : [GTLRCloudAsset_GoogleCloudOrgpolicyV1Policy class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_AuditConfig
//

@implementation GTLRCloudAsset_AuditConfig
@dynamic auditLogConfigs, service;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditLogConfigs" : [GTLRCloudAsset_AuditLogConfig class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_AuditLogConfig
//

@implementation GTLRCloudAsset_AuditLogConfig
@dynamic exemptedMembers, logType;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"exemptedMembers" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_BatchGetAssetsHistoryResponse
//

@implementation GTLRCloudAsset_BatchGetAssetsHistoryResponse
@dynamic assets;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"assets" : [GTLRCloudAsset_TemporalAsset class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_BigQueryDestination
//

@implementation GTLRCloudAsset_BigQueryDestination
@dynamic dataset, force, table;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Binding
//

@implementation GTLRCloudAsset_Binding
@dynamic condition, members, role;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"members" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_CreateFeedRequest
//

@implementation GTLRCloudAsset_CreateFeedRequest
@dynamic feed, feedId;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Empty
//

@implementation GTLRCloudAsset_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_ExportAssetsRequest
//

@implementation GTLRCloudAsset_ExportAssetsRequest
@dynamic assetTypes, contentType, outputConfig, readTime;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"assetTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Expr
//

@implementation GTLRCloudAsset_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Feed
//

@implementation GTLRCloudAsset_Feed
@dynamic assetNames, assetTypes, contentType, feedOutputConfig, name;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"assetNames" : [NSString class],
    @"assetTypes" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_FeedOutputConfig
//

@implementation GTLRCloudAsset_FeedOutputConfig
@dynamic pubsubDestination;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GcsDestination
//

@implementation GTLRCloudAsset_GcsDestination
@dynamic uri, uriPrefix;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleCloudOrgpolicyV1BooleanPolicy
//

@implementation GTLRCloudAsset_GoogleCloudOrgpolicyV1BooleanPolicy
@dynamic enforced;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy
//

@implementation GTLRCloudAsset_GoogleCloudOrgpolicyV1ListPolicy
@dynamic allowedValues, allValues, deniedValues, inheritFromParent,
         suggestedValue;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedValues" : [NSString class],
    @"deniedValues" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleCloudOrgpolicyV1Policy
//

@implementation GTLRCloudAsset_GoogleCloudOrgpolicyV1Policy
@dynamic booleanPolicy, constraint, ETag, listPolicy, restoreDefault,
         updateTime, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleCloudOrgpolicyV1RestoreDefault
//

@implementation GTLRCloudAsset_GoogleCloudOrgpolicyV1RestoreDefault
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1AccessLevel
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1AccessLevel
@dynamic basic, custom, descriptionProperty, name, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1AccessPolicy
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1AccessPolicy
@dynamic ETag, name, parent, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1BasicLevel
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1BasicLevel
@dynamic combiningFunction, conditions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"conditions" : [GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1Condition class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1Condition
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1Condition
@dynamic devicePolicy, ipSubnetworks, members, negate, regions,
         requiredAccessLevels;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ipSubnetworks" : [NSString class],
    @"members" : [NSString class],
    @"regions" : [NSString class],
    @"requiredAccessLevels" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1CustomLevel
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1CustomLevel
@dynamic expr;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1DevicePolicy
@dynamic allowedDeviceManagementLevels, allowedEncryptionStatuses,
         osConstraints, requireAdminApproval, requireCorpOwned,
         requireScreenlock;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedDeviceManagementLevels" : [NSString class],
    @"allowedEncryptionStatuses" : [NSString class],
    @"osConstraints" : [GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1OsConstraint
@dynamic minimumVersion, osType, requireVerifiedChromeOs;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeter
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeter
@dynamic descriptionProperty, name, perimeterType, spec, status, title,
         useExplicitDryRunSpec;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeterConfig
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1ServicePerimeterConfig
@dynamic accessLevels, resources, restrictedServices, vpcAccessibleServices;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"accessLevels" : [NSString class],
    @"resources" : [NSString class],
    @"restrictedServices" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1VpcAccessibleServices
//

@implementation GTLRCloudAsset_GoogleIdentityAccesscontextmanagerV1VpcAccessibleServices
@dynamic allowedServices, enableRestriction;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedServices" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_ListFeedsResponse
//

@implementation GTLRCloudAsset_ListFeedsResponse
@dynamic feeds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"feeds" : [GTLRCloudAsset_Feed class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Operation
//

@implementation GTLRCloudAsset_Operation
@dynamic done, error, metadata, name, response;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Operation_Metadata
//

@implementation GTLRCloudAsset_Operation_Metadata

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Operation_Response
//

@implementation GTLRCloudAsset_Operation_Response

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_OutputConfig
//

@implementation GTLRCloudAsset_OutputConfig
@dynamic bigqueryDestination, gcsDestination;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Policy
//

@implementation GTLRCloudAsset_Policy
@dynamic auditConfigs, bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"auditConfigs" : [GTLRCloudAsset_AuditConfig class],
    @"bindings" : [GTLRCloudAsset_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_PubsubDestination
//

@implementation GTLRCloudAsset_PubsubDestination
@dynamic topic;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Resource
//

@implementation GTLRCloudAsset_Resource
@dynamic data, discoveryDocumentUri, discoveryName, parent, resourceUrl,
         version;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Resource_Data
//

@implementation GTLRCloudAsset_Resource_Data

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Status
//

@implementation GTLRCloudAsset_Status
@dynamic code, details, message;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"details" : [GTLRCloudAsset_Status_Details_Item class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_Status_Details_Item
//

@implementation GTLRCloudAsset_Status_Details_Item

+ (Class)classForAdditionalProperties {
  return [NSObject class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_TemporalAsset
//

@implementation GTLRCloudAsset_TemporalAsset
@dynamic asset, deleted, window;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_TimeWindow
//

@implementation GTLRCloudAsset_TimeWindow
@dynamic endTime, startTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRCloudAsset_UpdateFeedRequest
//

@implementation GTLRCloudAsset_UpdateFeedRequest
@dynamic feed, updateMask;
@end
