// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud TPU API (tpu/v1)
// Description:
//   TPU API provides customers with access to Google TPU technology.
// Documentation:
//   https://cloud.google.com/tpu/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTPU_AcceleratorType;
@class GTLRTPU_Location;
@class GTLRTPU_Location_Labels;
@class GTLRTPU_Location_Metadata;
@class GTLRTPU_NetworkEndpoint;
@class GTLRTPU_Node;
@class GTLRTPU_Node_Labels;
@class GTLRTPU_Operation;
@class GTLRTPU_Operation_Metadata;
@class GTLRTPU_Operation_Response;
@class GTLRTPU_SchedulingConfig;
@class GTLRTPU_Status;
@class GTLRTPU_Status_Details_Item;
@class GTLRTPU_Symptom;
@class GTLRTPU_TensorFlowVersion;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRTPU_Node.apiVersion

/**
 *  API version is unknown.
 *
 *  Value: "API_VERSION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_ApiVersion_ApiVersionUnspecified;
/**
 *  TPU API V1 version.
 *
 *  Value: "V1"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_ApiVersion_V1;
/**
 *  TPU API V1Alpha1 version.
 *
 *  Value: "V1_ALPHA1"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_ApiVersion_V1Alpha1;
/**
 *  TPU API V2Alpha1 version.
 *
 *  Value: "V2_ALPHA1"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_ApiVersion_V2Alpha1;

// ----------------------------------------------------------------------------
// GTLRTPU_Node.health

/**
 *  The resource is unhealthy.
 *
 *  Value: "DEPRECATED_UNHEALTHY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_DeprecatedUnhealthy;
/**
 *  Health status is unknown: not initialized or failed to retrieve.
 *
 *  Value: "HEALTH_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_HealthUnspecified;
/**
 *  The resource is healthy.
 *
 *  Value: "HEALTHY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_Healthy;
/**
 *  The resource is unresponsive.
 *
 *  Value: "TIMEOUT"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_Timeout;
/**
 *  The node is under maintenance/priority boost caused rescheduling and will
 *  resume running once rescheduled.
 *
 *  Value: "UNHEALTHY_MAINTENANCE"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_UnhealthyMaintenance;
/**
 *  The in-guest ML stack is unhealthy.
 *
 *  Value: "UNHEALTHY_TENSORFLOW"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_Health_UnhealthyTensorflow;

// ----------------------------------------------------------------------------
// GTLRTPU_Node.state

/**
 *  TPU node is being created.
 *
 *  Value: "CREATING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Creating;
/**
 *  TPU node is being deleted.
 *
 *  Value: "DELETING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Deleting;
/**
 *  TPU node has been hidden.
 *
 *  Value: "HIDDEN"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Hidden;
/**
 *  TPU node is currently hiding.
 *
 *  Value: "HIDING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Hiding;
/**
 *  TPU node has been preempted. Only applies to Preemptible TPU Nodes.
 *
 *  Value: "PREEMPTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Preempted;
/**
 *  TPU node has been created.
 *
 *  Value: "READY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Ready;
/**
 *  TPU node is undergoing reimaging.
 *
 *  Value: "REIMAGING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Reimaging;
/**
 *  TPU node is being repaired and may be unusable. Details can be found in the
 *  `help_description` field.
 *
 *  Value: "REPAIRING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Repairing;
/**
 *  TPU node is restarting.
 *
 *  Value: "RESTARTING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Restarting;
/**
 *  TPU node is currently starting.
 *
 *  Value: "STARTING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Starting;
/**
 *  TPU node state is not known/set.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_StateUnspecified;
/**
 *  TPU node is stopped.
 *
 *  Value: "STOPPED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Stopped;
/**
 *  TPU node is currently stopping.
 *
 *  Value: "STOPPING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Stopping;
/**
 *  TPU node has been terminated due to maintenance or has reached the end of
 *  its life cycle (for preemptible nodes).
 *
 *  Value: "TERMINATED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Terminated;
/**
 *  TPU node is currently unhiding.
 *
 *  Value: "UNHIDING"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Node_State_Unhiding;

// ----------------------------------------------------------------------------
// GTLRTPU_Symptom.symptomType

/**
 *  TPU runtime execution has timed out.
 *
 *  Value: "EXECUTE_TIMED_OUT"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_ExecuteTimedOut;
/**
 *  TPU HBM is out of memory.
 *
 *  Value: "HBM_OUT_OF_MEMORY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_HbmOutOfMemory;
/**
 *  TPU VM memory is low.
 *
 *  Value: "LOW_MEMORY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_LowMemory;
/**
 *  TPU runtime fails to construct a mesh that recognizes each TPU device's
 *  neighbors.
 *
 *  Value: "MESH_BUILD_FAIL"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_MeshBuildFail;
/**
 *  TPU runtime is out of memory.
 *
 *  Value: "OUT_OF_MEMORY"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_OutOfMemory;
/**
 *  Abusive behaviors have been identified on the current project.
 *
 *  Value: "PROJECT_ABUSE"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_ProjectAbuse;
/**
 *  Unspecified symptom.
 *
 *  Value: "SYMPTOM_TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRTPU_Symptom_SymptomType_SymptomTypeUnspecified;

/**
 *  A accelerator type that a Node can be configured with.
 */
@interface GTLRTPU_AcceleratorType : GTLRObject

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/** the accelerator type. */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); } The JSON
 *  representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRTPU_Empty : GTLRObject
@end


/**
 *  Response for ListAcceleratorTypes.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "acceleratorTypes" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRTPU_ListAcceleratorTypesResponse : GTLRCollectionObject

/**
 *  The listed nodes.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_AcceleratorType *> *acceleratorTypes;

/** The next page token or empty if none. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/** Locations that could not be reached. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *unreachable;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTPU_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response for ListNodes.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "nodes" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTPU_ListNodesResponse : GTLRCollectionObject

/** The next page token or empty if none. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The listed nodes.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_Node *> *nodes;

/** Locations that could not be reached. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *unreachable;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTPU_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_Operation *> *operations;

@end


/**
 *  Response for ListTensorFlowVersions.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "tensorflowVersions" property. If returned as the result of a
 *        query, it should support automatic pagination (when @c
 *        shouldFetchNextPages is enabled).
 */
@interface GTLRTPU_ListTensorFlowVersionsResponse : GTLRCollectionObject

/** The next page token or empty if none. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The listed nodes.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_TensorFlowVersion *> *tensorflowVersions;

/** Locations that could not be reached. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *unreachable;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRTPU_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name. For
 *  example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRTPU_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRTPU_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations. For
 *  example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTPU_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTPU_Location_Metadata : GTLRObject
@end


/**
 *  A network endpoint over which a TPU worker can be reached.
 */
@interface GTLRTPU_NetworkEndpoint : GTLRObject

/** The IP address of this network endpoint. */
@property(nonatomic, copy, nullable) NSString *ipAddress;

/**
 *  The port of this network endpoint.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *port;

@end


/**
 *  A TPU instance.
 */
@interface GTLRTPU_Node : GTLRObject

/** Required. The type of hardware accelerators associated with this node. */
@property(nonatomic, copy, nullable) NSString *acceleratorType;

/**
 *  Output only. The API version that created this Node.
 *
 *  Likely values:
 *    @arg @c kGTLRTPU_Node_ApiVersion_ApiVersionUnspecified API version is
 *        unknown. (Value: "API_VERSION_UNSPECIFIED")
 *    @arg @c kGTLRTPU_Node_ApiVersion_V1 TPU API V1 version. (Value: "V1")
 *    @arg @c kGTLRTPU_Node_ApiVersion_V1Alpha1 TPU API V1Alpha1 version.
 *        (Value: "V1_ALPHA1")
 *    @arg @c kGTLRTPU_Node_ApiVersion_V2Alpha1 TPU API V2Alpha1 version.
 *        (Value: "V2_ALPHA1")
 */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/**
 *  The CIDR block that the TPU node will use when selecting an IP address. This
 *  CIDR block must be a /29 block; the Compute Engine networks API forbids a
 *  smaller block, and using a larger block would be wasteful (a node can only
 *  consume one IP address). Errors will occur if the CIDR block has already
 *  been used for a currently existing TPU node, the CIDR block conflicts with
 *  any subnetworks in the user's provided network, or the provided network is
 *  peered with another network that is using that CIDR block.
 */
@property(nonatomic, copy, nullable) NSString *cidrBlock;

/** Output only. The time when the node was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The user-supplied description of the TPU. Maximum of 512 characters.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The health status of the TPU node.
 *
 *  Likely values:
 *    @arg @c kGTLRTPU_Node_Health_DeprecatedUnhealthy The resource is
 *        unhealthy. (Value: "DEPRECATED_UNHEALTHY")
 *    @arg @c kGTLRTPU_Node_Health_HealthUnspecified Health status is unknown:
 *        not initialized or failed to retrieve. (Value: "HEALTH_UNSPECIFIED")
 *    @arg @c kGTLRTPU_Node_Health_Healthy The resource is healthy. (Value:
 *        "HEALTHY")
 *    @arg @c kGTLRTPU_Node_Health_Timeout The resource is unresponsive. (Value:
 *        "TIMEOUT")
 *    @arg @c kGTLRTPU_Node_Health_UnhealthyMaintenance The node is under
 *        maintenance/priority boost caused rescheduling and will resume running
 *        once rescheduled. (Value: "UNHEALTHY_MAINTENANCE")
 *    @arg @c kGTLRTPU_Node_Health_UnhealthyTensorflow The in-guest ML stack is
 *        unhealthy. (Value: "UNHEALTHY_TENSORFLOW")
 */
@property(nonatomic, copy, nullable) NSString *health;

/**
 *  Output only. If this field is populated, it contains a description of why
 *  the TPU Node is unhealthy.
 */
@property(nonatomic, copy, nullable) NSString *healthDescription;

/**
 *  Output only. DEPRECATED! Use network_endpoints instead. The network address
 *  for the TPU Node as visible to Compute Engine instances.
 */
@property(nonatomic, copy, nullable) NSString *ipAddress;

/** Resource labels to represent user-provided metadata. */
@property(nonatomic, strong, nullable) GTLRTPU_Node_Labels *labels;

/** Output only. Immutable. The name of the TPU */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The name of a network they wish to peer the TPU node to. It must be a
 *  preexisting Compute Engine network inside of the project on which this API
 *  has been activated. If none is provided, "default" will be used.
 */
@property(nonatomic, copy, nullable) NSString *network;

/**
 *  Output only. The network endpoints where TPU workers can be accessed and
 *  sent work. It is recommended that Tensorflow clients of the node reach out
 *  to the 0th entry in this map first.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_NetworkEndpoint *> *networkEndpoints;

/**
 *  Output only. DEPRECATED! Use network_endpoints instead. The network port for
 *  the TPU Node as visible to Compute Engine instances.
 */
@property(nonatomic, copy, nullable) NSString *port;

/** The scheduling options for this node. */
@property(nonatomic, strong, nullable) GTLRTPU_SchedulingConfig *schedulingConfig;

/**
 *  Output only. The service account used to run the tensor flow services within
 *  the node. To share resources, including Google Cloud Storage data, with the
 *  Tensorflow job running in the Node, this account must have permissions to
 *  that data.
 */
@property(nonatomic, copy, nullable) NSString *serviceAccount;

/**
 *  Output only. The current state for the TPU Node.
 *
 *  Likely values:
 *    @arg @c kGTLRTPU_Node_State_Creating TPU node is being created. (Value:
 *        "CREATING")
 *    @arg @c kGTLRTPU_Node_State_Deleting TPU node is being deleted. (Value:
 *        "DELETING")
 *    @arg @c kGTLRTPU_Node_State_Hidden TPU node has been hidden. (Value:
 *        "HIDDEN")
 *    @arg @c kGTLRTPU_Node_State_Hiding TPU node is currently hiding. (Value:
 *        "HIDING")
 *    @arg @c kGTLRTPU_Node_State_Preempted TPU node has been preempted. Only
 *        applies to Preemptible TPU Nodes. (Value: "PREEMPTED")
 *    @arg @c kGTLRTPU_Node_State_Ready TPU node has been created. (Value:
 *        "READY")
 *    @arg @c kGTLRTPU_Node_State_Reimaging TPU node is undergoing reimaging.
 *        (Value: "REIMAGING")
 *    @arg @c kGTLRTPU_Node_State_Repairing TPU node is being repaired and may
 *        be unusable. Details can be found in the `help_description` field.
 *        (Value: "REPAIRING")
 *    @arg @c kGTLRTPU_Node_State_Restarting TPU node is restarting. (Value:
 *        "RESTARTING")
 *    @arg @c kGTLRTPU_Node_State_Starting TPU node is currently starting.
 *        (Value: "STARTING")
 *    @arg @c kGTLRTPU_Node_State_StateUnspecified TPU node state is not
 *        known/set. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRTPU_Node_State_Stopped TPU node is stopped. (Value:
 *        "STOPPED")
 *    @arg @c kGTLRTPU_Node_State_Stopping TPU node is currently stopping.
 *        (Value: "STOPPING")
 *    @arg @c kGTLRTPU_Node_State_Terminated TPU node has been terminated due to
 *        maintenance or has reached the end of its life cycle (for preemptible
 *        nodes). (Value: "TERMINATED")
 *    @arg @c kGTLRTPU_Node_State_Unhiding TPU node is currently unhiding.
 *        (Value: "UNHIDING")
 */
@property(nonatomic, copy, nullable) NSString *state;

/** Output only. The Symptoms that have occurred to the TPU Node. */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_Symptom *> *symptoms;

/** Required. The version of Tensorflow running in the Node. */
@property(nonatomic, copy, nullable) NSString *tensorflowVersion;

/**
 *  Whether the VPC peering for the node is set up through Service Networking
 *  API. The VPC Peering should be set up before provisioning the node. If this
 *  field is set, cidr_block field should not be specified. If the network, that
 *  you want to peer the TPU Node to, is Shared VPC networks, the node must be
 *  created with this this field enabled.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *useServiceNetworking;

@end


/**
 *  Resource labels to represent user-provided metadata.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRTPU_Node_Labels : GTLRObject
@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRTPU_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress. If
 *  `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRTPU_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRTPU_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the `name`
 *  should be a resource name ending with `operations/{unique_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRTPU_Operation_Response *response;

@end


/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTPU_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx` is the
 *  original method name. For example, if the original method name is
 *  `TakeSnapshot()`, the inferred response type is `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTPU_Operation_Response : GTLRObject
@end


/**
 *  Represents the metadata of the long-running operation.
 */
@interface GTLRTPU_OperationMetadata : GTLRObject

/** Output only. API version used to start the operation. */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/**
 *  Output only. Identifies whether the user has requested cancellation of the
 *  operation. Operations that have been cancelled successfully have
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *cancelRequested;

/** Output only. The time the operation was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Output only. The time the operation finished running. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Output only. Human-readable status of the operation, if any. */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/**
 *  Output only. Server-defined resource path for the target of the operation.
 */
@property(nonatomic, copy, nullable) NSString *target;

/** Output only. Name of the verb executed by the operation. */
@property(nonatomic, copy, nullable) NSString *verb;

@end


/**
 *  Request for ReimageNode.
 */
@interface GTLRTPU_ReimageNodeRequest : GTLRObject

/** The version for reimage to create. */
@property(nonatomic, copy, nullable) NSString *tensorflowVersion;

@end


/**
 *  Sets the scheduling options for this node.
 */
@interface GTLRTPU_SchedulingConfig : GTLRObject

/**
 *  Defines whether the node is preemptible.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *preemptible;

/**
 *  Whether the node is created under a reservation.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *reserved;

@end


/**
 *  Request for StartNode.
 */
@interface GTLRTPU_StartNodeRequest : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details. You can
 *  find out more about this error model and how to work with it in the [API
 *  Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRTPU_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTPU_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRTPU_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRTPU_Status_Details_Item : GTLRObject
@end


/**
 *  Request for StopNode.
 */
@interface GTLRTPU_StopNodeRequest : GTLRObject
@end


/**
 *  A Symptom instance.
 */
@interface GTLRTPU_Symptom : GTLRObject

/** Timestamp when the Symptom is created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** Detailed information of the current Symptom. */
@property(nonatomic, copy, nullable) NSString *details;

/**
 *  Type of the Symptom.
 *
 *  Likely values:
 *    @arg @c kGTLRTPU_Symptom_SymptomType_ExecuteTimedOut TPU runtime execution
 *        has timed out. (Value: "EXECUTE_TIMED_OUT")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_HbmOutOfMemory TPU HBM is out of
 *        memory. (Value: "HBM_OUT_OF_MEMORY")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_LowMemory TPU VM memory is low.
 *        (Value: "LOW_MEMORY")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_MeshBuildFail TPU runtime fails to
 *        construct a mesh that recognizes each TPU device's neighbors. (Value:
 *        "MESH_BUILD_FAIL")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_OutOfMemory TPU runtime is out of
 *        memory. (Value: "OUT_OF_MEMORY")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_ProjectAbuse Abusive behaviors have
 *        been identified on the current project. (Value: "PROJECT_ABUSE")
 *    @arg @c kGTLRTPU_Symptom_SymptomType_SymptomTypeUnspecified Unspecified
 *        symptom. (Value: "SYMPTOM_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *symptomType;

/** A string used to uniquely distinguish a worker within a TPU node. */
@property(nonatomic, copy, nullable) NSString *workerId;

@end


/**
 *  A tensorflow version that a Node can be configured with.
 */
@interface GTLRTPU_TensorFlowVersion : GTLRObject

/** The resource name. */
@property(nonatomic, copy, nullable) NSString *name;

/** the tensorflow version. */
@property(nonatomic, copy, nullable) NSString *version;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
