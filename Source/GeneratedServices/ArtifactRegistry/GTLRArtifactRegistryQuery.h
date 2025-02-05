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
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRArtifactRegistry_CancelOperationRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Artifact Registry query classes.
 */
@interface GTLRArtifactRegistryQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  Method: artifactregistry.operations.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_OperationsCancel : GTLRArtifactRegistryQuery

/** The name of the operation resource to be cancelled. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Empty.
 *
 *  Starts asynchronous cancellation on a long-running operation. The server
 *  makes a best effort to cancel the operation, but success is not guaranteed.
 *  If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`. Clients can use Operations.GetOperation or
 *  other methods to check whether the cancellation succeeded or whether the
 *  operation completed despite cancellation. On successful cancellation, the
 *  operation is not deleted; instead, it becomes an operation with an
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *
 *  @param object The @c GTLRArtifactRegistry_CancelOperationRequest to include
 *    in the query.
 *  @param name The name of the operation resource to be cancelled.
 *
 *  @return GTLRArtifactRegistryQuery_OperationsCancel
 */
+ (instancetype)queryWithObject:(GTLRArtifactRegistry_CancelOperationRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  Method: artifactregistry.operations.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 */
@interface GTLRArtifactRegistryQuery_OperationsDelete : GTLRArtifactRegistryQuery

/** The name of the operation resource to be deleted. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Empty.
 *
 *  Deletes a long-running operation. This method indicates that the client is
 *  no longer interested in the operation result. It does not cancel the
 *  operation. If the server doesn't support this method, it returns
 *  `google.rpc.Code.UNIMPLEMENTED`.
 *
 *  @param name The name of the operation resource to be deleted.
 *
 *  @return GTLRArtifactRegistryQuery_OperationsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: artifactregistry.operations.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_OperationsGet : GTLRArtifactRegistryQuery

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @return GTLRArtifactRegistryQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  Method: artifactregistry.operations.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_OperationsList : GTLRArtifactRegistryQuery

/** The standard list filter. */
@property(nonatomic, copy, nullable) NSString *filter;

/** The name of the operation's parent resource. */
@property(nonatomic, copy, nullable) NSString *name;

/** The standard list page size. */
@property(nonatomic, assign) NSInteger pageSize;

/** The standard list page token. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListOperationsResponse.
 *
 *  Lists operations that match the specified filter in the request. If the
 *  server doesn't support this method, it returns `UNIMPLEMENTED`. NOTE: the
 *  `name` binding allows API services to override the binding to use different
 *  resource name schemes, such as `users/ * /operations`. To override the
 *  binding, API services can add a binding such as `"/v1/{name=users/
 *  *}/operations"` to their service configuration. For backwards compatibility,
 *  the default name includes the operations collection id, however overriding
 *  users must ensure the name binding is the parent resource, without the
 *  operations collection id.
 *
 *  @param name The name of the operation's parent resource.
 *
 *  @return GTLRArtifactRegistryQuery_OperationsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists docker images.
 *
 *  Method: artifactregistry.projects.locations.repositories.dockerImages.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesDockerImagesList : GTLRArtifactRegistryQuery

/** The maximum number of artifacts to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the parent resource whose docker images will be
 *  listed.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListDockerImagesResponse.
 *
 *  Lists docker images.
 *
 *  @param parent Required. The name of the parent resource whose docker images
 *    will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesDockerImagesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets a repository.
 *
 *  Method: artifactregistry.projects.locations.repositories.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGet : GTLRArtifactRegistryQuery

/** Required. The name of the repository to retrieve. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRArtifactRegistry_Repository.
 *
 *  Gets a repository.
 *
 *  @param name Required. The name of the repository to retrieve.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Lists repositories.
 *
 *  Method: artifactregistry.projects.locations.repositories.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatform
 *    @c kGTLRAuthScopeArtifactRegistryCloudPlatformReadOnly
 */
@interface GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesList : GTLRArtifactRegistryQuery

/** The maximum number of repositories to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  The next_page_token value returned from a previous list request, if any.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The name of the parent resource whose repositories will be listed.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRArtifactRegistry_ListRepositoriesResponse.
 *
 *  Lists repositories.
 *
 *  @param parent Required. The name of the parent resource whose repositories
 *    will be listed.
 *
 *  @return GTLRArtifactRegistryQuery_ProjectsLocationsRepositoriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
