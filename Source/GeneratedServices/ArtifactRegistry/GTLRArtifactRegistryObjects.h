// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Artifact Registry API (artifactregistry/v1)
// Description:
//   Store and manage build artifacts in a scalable and integrated service built
//   on Google infrastructure.
// Documentation:
//   https://cloud.google.com/artifacts/docs/

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

@class GTLRArtifactRegistry_DockerImage;
@class GTLRArtifactRegistry_Operation;
@class GTLRArtifactRegistry_Operation_Metadata;
@class GTLRArtifactRegistry_Operation_Response;
@class GTLRArtifactRegistry_Repository;
@class GTLRArtifactRegistry_Repository_Labels;
@class GTLRArtifactRegistry_Status;
@class GTLRArtifactRegistry_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRArtifactRegistry_Repository.format

/**
 *  Docker package format.
 *
 *  Value: "DOCKER"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_Docker;
/**
 *  Unspecified package format.
 *
 *  Value: "FORMAT_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_FormatUnspecified;
/**
 *  Maven package format.
 *
 *  Value: "MAVEN"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_Maven;
/**
 *  NPM package format.
 *
 *  Value: "NPM"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_Npm;
/**
 *  PyPI package format.
 *
 *  Value: "PYPI"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_Pypi;
/**
 *  Python package format.
 *
 *  Value: "PYTHON"
 */
FOUNDATION_EXTERN NSString * const kGTLRArtifactRegistry_Repository_Format_Python;

/**
 *  The request message for Operations.CancelOperation.
 */
@interface GTLRArtifactRegistry_CancelOperationRequest : GTLRObject
@end


/**
 *  DockerImage represents a docker artifact. The following fields are returned
 *  as untyped metadata in the Version resource, using camelcase keys (i.e.
 *  metadata.imageSizeBytes): - imageSizeBytes - mediaType - buildTime
 */
@interface GTLRArtifactRegistry_DockerImage : GTLRObject

/**
 *  The time this image was built. This field is returned as the
 *  'metadata.buildTime' field in the Version resource. The build time is
 *  returned to the client as an RFC 3339 string, which can be easily used with
 *  the JavaScript Date constructor and keeps the Version timestamps returned
 *  via OnePlatform consistent, as JSON marshals google.protobuf.Timestamp into
 *  an RFC 3339 string.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *buildTime;

/**
 *  Calculated size of the image. This field is returned as the
 *  'metadata.imageSizeBytes' field in the Version resource.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *imageSizeBytes;

/**
 *  Media type of this image, e.g.
 *  "application/vnd.docker.distribution.manifest.v2+json". This field is
 *  returned as the 'metadata.mediaType' field in the Version resource.
 */
@property(nonatomic, copy, nullable) NSString *mediaType;

/**
 *  Required. registry_location, project_id, repository_name and image id forms
 *  a unique image name:`projects//locations//repository//dockerImages/`. For
 *  example,
 *  "projects/test-project/locations/us-west4/repositories/test-repo/dockerImages/
 *  nginx\@sha256:e9954c1fc875017be1c3e36eca16be2d9e9bccc4bf072163515467d6a823c7cf",
 *  where "us-west4" is the registry_location, "test-project" is the project_id,
 *  "test-repo" is the repository_name and
 *  "nginx\@sha256:e9954c1fc875017be1c3e36eca16be2d9e9bccc4bf072163515467d6a823c7cf"
 *  is the image's digest.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Tags attached to this image. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *tags;

/** Time the image was uploaded. */
@property(nonatomic, strong, nullable) GTLRDateTime *uploadTime;

/**
 *  Required. URL to access the image. Example:
 *  us-west4-docker.pkg.dev/test-project/test-repo/nginx\@sha256:e9954c1fc875017be1c3e36eca16be2d9e9bccc4bf072163515467d6a823c7cf
 */
@property(nonatomic, copy, nullable) NSString *uri;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); } The JSON
 *  representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRArtifactRegistry_Empty : GTLRObject
@end


/**
 *  The response from listing docker images.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "dockerImages" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRArtifactRegistry_ListDockerImagesResponse : GTLRCollectionObject

/**
 *  The docker images returned.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRArtifactRegistry_DockerImage *> *dockerImages;

/**
 *  The token to retrieve the next page of artifacts, or empty if there are no
 *  more artifacts to return.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRArtifactRegistry_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRArtifactRegistry_Operation *> *operations;

@end


/**
 *  The response from listing repositories.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "repositories" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRArtifactRegistry_ListRepositoriesResponse : GTLRCollectionObject

/**
 *  The token to retrieve the next page of repositories, or empty if there are
 *  no more repositories to return.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  The repositories returned.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRArtifactRegistry_Repository *> *repositories;

@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRArtifactRegistry_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress. If
 *  `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRArtifactRegistry_Status *error;

/**
 *  Service-specific metadata associated with the operation. It typically
 *  contains progress information and common metadata such as create time. Some
 *  services might not provide such metadata. Any method that returns a
 *  long-running operation should document the metadata type, if any.
 */
@property(nonatomic, strong, nullable) GTLRArtifactRegistry_Operation_Metadata *metadata;

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
@property(nonatomic, strong, nullable) GTLRArtifactRegistry_Operation_Response *response;

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
@interface GTLRArtifactRegistry_Operation_Metadata : GTLRObject
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
@interface GTLRArtifactRegistry_Operation_Response : GTLRObject
@end


/**
 *  A Repository for storing artifacts with a specific format.
 */
@interface GTLRArtifactRegistry_Repository : GTLRObject

/** The time when the repository was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The user-provided description of the repository.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The format of packages that are stored in the repository.
 *
 *  Likely values:
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_Docker Docker package
 *        format. (Value: "DOCKER")
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_FormatUnspecified
 *        Unspecified package format. (Value: "FORMAT_UNSPECIFIED")
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_Maven Maven package
 *        format. (Value: "MAVEN")
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_Npm NPM package format.
 *        (Value: "NPM")
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_Pypi PyPI package format.
 *        (Value: "PYPI")
 *    @arg @c kGTLRArtifactRegistry_Repository_Format_Python Python package
 *        format. (Value: "PYTHON")
 */
@property(nonatomic, copy, nullable) NSString *format;

/**
 *  The Cloud KMS resource name of the customer managed encryption key that’s
 *  used to encrypt the contents of the Repository. Has the form:
 *  `projects/my-project/locations/my-region/keyRings/my-kr/cryptoKeys/my-key`.
 *  This value may not be changed after the Repository has been created.
 */
@property(nonatomic, copy, nullable) NSString *kmsKeyName;

/**
 *  Labels with user-defined metadata. This field may contain up to 64 entries.
 *  Label keys and values may be no longer than 63 characters. Label keys must
 *  begin with a lowercase letter and may only contain lowercase letters,
 *  numeric characters, underscores, and dashes.
 */
@property(nonatomic, strong, nullable) GTLRArtifactRegistry_Repository_Labels *labels;

/**
 *  The name of the repository, for example:
 *  "projects/p1/locations/us-central1/repositories/repo1".
 */
@property(nonatomic, copy, nullable) NSString *name;

/** The time when the repository was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Labels with user-defined metadata. This field may contain up to 64 entries.
 *  Label keys and values may be no longer than 63 characters. Label keys must
 *  begin with a lowercase letter and may only contain lowercase letters,
 *  numeric characters, underscores, and dashes.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRArtifactRegistry_Repository_Labels : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different programming environments, including REST APIs and RPC APIs. It is
 *  used by [gRPC](https://github.com/grpc). Each `Status` message contains
 *  three pieces of data: error code, error message, and error details. You can
 *  find out more about this error model and how to work with it in the [API
 *  Design Guide](https://cloud.google.com/apis/design/errors).
 */
@interface GTLRArtifactRegistry_Status : GTLRObject

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
@property(nonatomic, strong, nullable) NSArray<GTLRArtifactRegistry_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRArtifactRegistry_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRArtifactRegistry_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
