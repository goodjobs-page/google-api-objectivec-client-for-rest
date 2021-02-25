// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Pub/Sub API (pubsub/v1)
// Description:
//   Provides reliable, many-to-many, asynchronous messaging between
//   applications.
// Documentation:
//   https://cloud.google.com/pubsub/docs

#import "GTLRPubsubObjects.h"

// ----------------------------------------------------------------------------
// Constants

// GTLRPubsub_Schema.type
NSString * const kGTLRPubsub_Schema_Type_Avro            = @"AVRO";
NSString * const kGTLRPubsub_Schema_Type_ProtocolBuffer  = @"PROTOCOL_BUFFER";
NSString * const kGTLRPubsub_Schema_Type_TypeUnspecified = @"TYPE_UNSPECIFIED";

// GTLRPubsub_SchemaSettings.encoding
NSString * const kGTLRPubsub_SchemaSettings_Encoding_Binary    = @"BINARY";
NSString * const kGTLRPubsub_SchemaSettings_Encoding_EncodingUnspecified = @"ENCODING_UNSPECIFIED";
NSString * const kGTLRPubsub_SchemaSettings_Encoding_Json      = @"JSON";

// GTLRPubsub_ValidateMessageRequest.encoding
NSString * const kGTLRPubsub_ValidateMessageRequest_Encoding_Binary = @"BINARY";
NSString * const kGTLRPubsub_ValidateMessageRequest_Encoding_EncodingUnspecified = @"ENCODING_UNSPECIFIED";
NSString * const kGTLRPubsub_ValidateMessageRequest_Encoding_Json = @"JSON";

// ----------------------------------------------------------------------------
//
//   GTLRPubsub_AcknowledgeRequest
//

@implementation GTLRPubsub_AcknowledgeRequest
@dynamic ackIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ackIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Binding
//

@implementation GTLRPubsub_Binding
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
//   GTLRPubsub_CreateSnapshotRequest
//

@implementation GTLRPubsub_CreateSnapshotRequest
@dynamic labels, subscription;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_CreateSnapshotRequest_Labels
//

@implementation GTLRPubsub_CreateSnapshotRequest_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_DeadLetterPolicy
//

@implementation GTLRPubsub_DeadLetterPolicy
@dynamic deadLetterTopic, maxDeliveryAttempts;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_DetachSubscriptionResponse
//

@implementation GTLRPubsub_DetachSubscriptionResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Empty
//

@implementation GTLRPubsub_Empty
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ExpirationPolicy
//

@implementation GTLRPubsub_ExpirationPolicy
@dynamic ttl;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Expr
//

@implementation GTLRPubsub_Expr
@dynamic descriptionProperty, expression, location, title;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"descriptionProperty" : @"description" };
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListSchemasResponse
//

@implementation GTLRPubsub_ListSchemasResponse
@dynamic nextPageToken, schemas;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"schemas" : [GTLRPubsub_Schema class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"schemas";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListSnapshotsResponse
//

@implementation GTLRPubsub_ListSnapshotsResponse
@dynamic nextPageToken, snapshots;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"snapshots" : [GTLRPubsub_Snapshot class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"snapshots";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListSubscriptionsResponse
//

@implementation GTLRPubsub_ListSubscriptionsResponse
@dynamic nextPageToken, subscriptions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"subscriptions" : [GTLRPubsub_Subscription class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"subscriptions";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListTopicSnapshotsResponse
//

@implementation GTLRPubsub_ListTopicSnapshotsResponse
@dynamic nextPageToken, snapshots;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"snapshots" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListTopicsResponse
//

@implementation GTLRPubsub_ListTopicsResponse
@dynamic nextPageToken, topics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"topics" : [GTLRPubsub_Topic class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"topics";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ListTopicSubscriptionsResponse
//

@implementation GTLRPubsub_ListTopicSubscriptionsResponse
@dynamic nextPageToken, subscriptions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"subscriptions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Message
//

@implementation GTLRPubsub_Message
@dynamic attributes, data, messageId, orderingKey, publishTime;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Message_Attributes
//

@implementation GTLRPubsub_Message_Attributes

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_MessageStoragePolicy
//

@implementation GTLRPubsub_MessageStoragePolicy
@dynamic allowedPersistenceRegions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"allowedPersistenceRegions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ModifyAckDeadlineRequest
//

@implementation GTLRPubsub_ModifyAckDeadlineRequest
@dynamic ackDeadlineSeconds, ackIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ackIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ModifyPushConfigRequest
//

@implementation GTLRPubsub_ModifyPushConfigRequest
@dynamic pushConfig;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_OidcToken
//

@implementation GTLRPubsub_OidcToken
@dynamic audience, serviceAccountEmail;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Policy
//

@implementation GTLRPubsub_Policy
@dynamic bindings, ETag, version;

+ (NSDictionary<NSString *, NSString *> *)propertyToJSONKeyMap {
  return @{ @"ETag" : @"etag" };
}

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"bindings" : [GTLRPubsub_Binding class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PublishRequest
//

@implementation GTLRPubsub_PublishRequest
@dynamic messages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"messages" : [GTLRPubsub_Message class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PublishResponse
//

@implementation GTLRPubsub_PublishResponse
@dynamic messageIds;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"messageIds" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PullRequest
//

@implementation GTLRPubsub_PullRequest
@dynamic maxMessages, returnImmediately;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PullResponse
//

@implementation GTLRPubsub_PullResponse
@dynamic receivedMessages;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"receivedMessages" : [GTLRPubsub_ReceivedMessage class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PushConfig
//

@implementation GTLRPubsub_PushConfig
@dynamic attributes, oidcToken, pushEndpoint;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_PushConfig_Attributes
//

@implementation GTLRPubsub_PushConfig_Attributes

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ReceivedMessage
//

@implementation GTLRPubsub_ReceivedMessage
@dynamic ackId, deliveryAttempt, message;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_RetryPolicy
//

@implementation GTLRPubsub_RetryPolicy
@dynamic maximumBackoff, minimumBackoff;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Schema
//

@implementation GTLRPubsub_Schema
@dynamic definition, name, type;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_SchemaSettings
//

@implementation GTLRPubsub_SchemaSettings
@dynamic encoding, schema;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_SeekRequest
//

@implementation GTLRPubsub_SeekRequest
@dynamic snapshot, time;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_SeekResponse
//

@implementation GTLRPubsub_SeekResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_SetIamPolicyRequest
//

@implementation GTLRPubsub_SetIamPolicyRequest
@dynamic policy;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Snapshot
//

@implementation GTLRPubsub_Snapshot
@dynamic expireTime, labels, name, topic;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Snapshot_Labels
//

@implementation GTLRPubsub_Snapshot_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Subscription
//

@implementation GTLRPubsub_Subscription
@dynamic ackDeadlineSeconds, deadLetterPolicy, detached, enableMessageOrdering,
         expirationPolicy, filter, labels, messageRetentionDuration, name,
         pushConfig, retainAckedMessages, retryPolicy, topic;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Subscription_Labels
//

@implementation GTLRPubsub_Subscription_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_TestIamPermissionsRequest
//

@implementation GTLRPubsub_TestIamPermissionsRequest
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_TestIamPermissionsResponse
//

@implementation GTLRPubsub_TestIamPermissionsResponse
@dynamic permissions;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"permissions" : [NSString class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Topic
//

@implementation GTLRPubsub_Topic
@dynamic kmsKeyName, labels, messageStoragePolicy, name, satisfiesPzs,
         schemaSettings;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_Topic_Labels
//

@implementation GTLRPubsub_Topic_Labels

+ (Class)classForAdditionalProperties {
  return [NSString class];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_UpdateSnapshotRequest
//

@implementation GTLRPubsub_UpdateSnapshotRequest
@dynamic snapshot, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_UpdateSubscriptionRequest
//

@implementation GTLRPubsub_UpdateSubscriptionRequest
@dynamic subscription, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_UpdateTopicRequest
//

@implementation GTLRPubsub_UpdateTopicRequest
@dynamic topic, updateMask;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ValidateMessageRequest
//

@implementation GTLRPubsub_ValidateMessageRequest
@dynamic encoding, message, name, schema;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ValidateMessageResponse
//

@implementation GTLRPubsub_ValidateMessageResponse
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ValidateSchemaRequest
//

@implementation GTLRPubsub_ValidateSchemaRequest
@dynamic schema;
@end


// ----------------------------------------------------------------------------
//
//   GTLRPubsub_ValidateSchemaResponse
//

@implementation GTLRPubsub_ValidateSchemaResponse
@end
