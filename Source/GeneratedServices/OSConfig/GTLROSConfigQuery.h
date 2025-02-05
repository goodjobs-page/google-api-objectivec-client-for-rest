// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   OS Config API (osconfig/v1)
// Description:
//   OS management tools that can be used for patch management, patch
//   compliance, and configuration management on VM instances.
// Documentation:
//   https://cloud.google.com/compute/docs/osconfig/rest

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

@class GTLROSConfig_CancelPatchJobRequest;
@class GTLROSConfig_ExecutePatchJobRequest;
@class GTLROSConfig_PatchDeployment;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// view

/**
 *  Returns the basic inventory information that includes `os_info`.
 *
 *  Value: "BASIC"
 */
FOUNDATION_EXTERN NSString * const kGTLROSConfigViewBasic;
/**
 *  Returns all fields.
 *
 *  Value: "FULL"
 */
FOUNDATION_EXTERN NSString * const kGTLROSConfigViewFull;
/**
 *  The default value. The API defaults to the BASIC view.
 *
 *  Value: "INVENTORY_VIEW_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLROSConfigViewInventoryViewUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other OS Config query classes.
 */
@interface GTLROSConfigQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Get inventory data for the specified VM instance. If the VM has no
 *  associated inventory, the message `NOT_FOUND` is returned.
 *
 *  Method: osconfig.projects.locations.instances.inventories.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsLocationsInstancesInventoriesGet : GTLROSConfigQuery

/**
 *  Required. API resource name for inventory resource. Format:
 *  `projects/{project}/locations/{location}/instances/{instance}/inventory` For
 *  `{project}`, either `project-number` or `project-id` can be provided. For
 *  `{instance}`, either Compute Engine `instance-id` or `instance-name` can be
 *  provided.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Inventory view indicating what information should be included in the
 *  inventory resource. If unspecified, the default view is BASIC.
 *
 *  Likely values:
 *    @arg @c kGTLROSConfigViewInventoryViewUnspecified The default value. The
 *        API defaults to the BASIC view. (Value: "INVENTORY_VIEW_UNSPECIFIED")
 *    @arg @c kGTLROSConfigViewBasic Returns the basic inventory information
 *        that includes `os_info`. (Value: "BASIC")
 *    @arg @c kGTLROSConfigViewFull Returns all fields. (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLROSConfig_Inventory.
 *
 *  Get inventory data for the specified VM instance. If the VM has no
 *  associated inventory, the message `NOT_FOUND` is returned.
 *
 *  @param name Required. API resource name for inventory resource. Format:
 *    `projects/{project}/locations/{location}/instances/{instance}/inventory`
 *    For `{project}`, either `project-number` or `project-id` can be provided.
 *    For `{instance}`, either Compute Engine `instance-id` or `instance-name`
 *    can be provided.
 *
 *  @return GTLROSConfigQuery_ProjectsLocationsInstancesInventoriesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List inventory data for all VM instances in the specified zone.
 *
 *  Method: osconfig.projects.locations.instances.inventories.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsLocationsInstancesInventoriesList : GTLROSConfigQuery

/**
 *  If provided, this field specifies the criteria that must be met by a
 *  `Inventory` API resource to be included in the response.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to `ListInventories` that
 *  indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name. Format:
 *  `projects/{project}/locations/{location}/instances/-` For `{project}`,
 *  either `project-number` or `project-id` can be provided.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Inventory view indicating what information should be included in the
 *  inventory resource. If unspecified, the default view is BASIC.
 *
 *  Likely values:
 *    @arg @c kGTLROSConfigViewInventoryViewUnspecified The default value. The
 *        API defaults to the BASIC view. (Value: "INVENTORY_VIEW_UNSPECIFIED")
 *    @arg @c kGTLROSConfigViewBasic Returns the basic inventory information
 *        that includes `os_info`. (Value: "BASIC")
 *    @arg @c kGTLROSConfigViewFull Returns all fields. (Value: "FULL")
 */
@property(nonatomic, copy, nullable) NSString *view;

/**
 *  Fetches a @c GTLROSConfig_ListInventoriesResponse.
 *
 *  List inventory data for all VM instances in the specified zone.
 *
 *  @param parent Required. The parent resource name. Format:
 *    `projects/{project}/locations/{location}/instances/-` For `{project}`,
 *    either `project-number` or `project-id` can be provided.
 *
 *  @return GTLROSConfigQuery_ProjectsLocationsInstancesInventoriesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Gets the vulnerability report for the specified VM instance. Only VMs with
 *  inventory data have vulnerability reports associated with them.
 *
 *  Method: osconfig.projects.locations.instances.vulnerabilityReports.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsLocationsInstancesVulnerabilityReportsGet : GTLROSConfigQuery

/**
 *  Required. API resource name for vulnerability resource. Format:
 *  `projects/{project}/locations/{location}/instances/{instance}/vulnerabilityReport`
 *  For `{project}`, either `project-number` or `project-id` can be provided.
 *  For `{instance}`, either Compute Engine `instance-id` or `instance-name` can
 *  be provided.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROSConfig_VulnerabilityReport.
 *
 *  Gets the vulnerability report for the specified VM instance. Only VMs with
 *  inventory data have vulnerability reports associated with them.
 *
 *  @param name Required. API resource name for vulnerability resource. Format:
 *    `projects/{project}/locations/{location}/instances/{instance}/vulnerabilityReport`
 *    For `{project}`, either `project-number` or `project-id` can be provided.
 *    For `{instance}`, either Compute Engine `instance-id` or `instance-name`
 *    can be provided.
 *
 *  @return GTLROSConfigQuery_ProjectsLocationsInstancesVulnerabilityReportsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List vulnerability reports for all VM instances in the specified zone.
 *
 *  Method: osconfig.projects.locations.instances.vulnerabilityReports.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsLocationsInstancesVulnerabilityReportsList : GTLROSConfigQuery

/**
 *  If provided, this field specifies the criteria that must be met by a
 *  `vulnerabilityReport` API resource to be included in the response.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of results to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call to
 *  `ListVulnerabilityReports` that indicates where this listing should continue
 *  from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent resource name. Format:
 *  `projects/{project}/locations/{location}/instances/-` For `{project}`,
 *  either `project-number` or `project-id` can be provided.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROSConfig_ListVulnerabilityReportsResponse.
 *
 *  List vulnerability reports for all VM instances in the specified zone.
 *
 *  @param parent Required. The parent resource name. Format:
 *    `projects/{project}/locations/{location}/instances/-` For `{project}`,
 *    either `project-number` or `project-id` can be provided.
 *
 *  @return GTLROSConfigQuery_ProjectsLocationsInstancesVulnerabilityReportsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Create an OS Config patch deployment.
 *
 *  Method: osconfig.projects.patchDeployments.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchDeploymentsCreate : GTLROSConfigQuery

/**
 *  Required. The project to apply this patch deployment to in the form
 *  `projects/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Required. A name for the patch deployment in the project. When creating a
 *  name the following rules apply: * Must contain only lowercase letters,
 *  numbers, and hyphens. * Must start with a letter. * Must be between 1-63
 *  characters. * Must end with a number or a letter. * Must be unique within
 *  the project.
 */
@property(nonatomic, copy, nullable) NSString *patchDeploymentId;

/**
 *  Fetches a @c GTLROSConfig_PatchDeployment.
 *
 *  Create an OS Config patch deployment.
 *
 *  @param object The @c GTLROSConfig_PatchDeployment to include in the query.
 *  @param parent Required. The project to apply this patch deployment to in the
 *    form `projects/ *`.
 *
 *  @return GTLROSConfigQuery_ProjectsPatchDeploymentsCreate
 */
+ (instancetype)queryWithObject:(GTLROSConfig_PatchDeployment *)object
                         parent:(NSString *)parent;

@end

/**
 *  Delete an OS Config patch deployment.
 *
 *  Method: osconfig.projects.patchDeployments.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchDeploymentsDelete : GTLROSConfigQuery

/**
 *  Required. The resource name of the patch deployment in the form `projects/ *
 *  /patchDeployments/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROSConfig_Empty.
 *
 *  Delete an OS Config patch deployment.
 *
 *  @param name Required. The resource name of the patch deployment in the form
 *    `projects/ * /patchDeployments/ *`.
 *
 *  @return GTLROSConfigQuery_ProjectsPatchDeploymentsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get an OS Config patch deployment.
 *
 *  Method: osconfig.projects.patchDeployments.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchDeploymentsGet : GTLROSConfigQuery

/**
 *  Required. The resource name of the patch deployment in the form `projects/ *
 *  /patchDeployments/ *`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROSConfig_PatchDeployment.
 *
 *  Get an OS Config patch deployment.
 *
 *  @param name Required. The resource name of the patch deployment in the form
 *    `projects/ * /patchDeployments/ *`.
 *
 *  @return GTLROSConfigQuery_ProjectsPatchDeploymentsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a page of OS Config patch deployments.
 *
 *  Method: osconfig.projects.patchDeployments.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchDeploymentsList : GTLROSConfigQuery

/**
 *  Optional. The maximum number of patch deployments to return. Default is 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. A pagination token returned from a previous call to
 *  ListPatchDeployments that indicates where this listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. The resource name of the parent in the form `projects/ *`. */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROSConfig_ListPatchDeploymentsResponse.
 *
 *  Get a page of OS Config patch deployments.
 *
 *  @param parent Required. The resource name of the parent in the form
 *    `projects/ *`.
 *
 *  @return GTLROSConfigQuery_ProjectsPatchDeploymentsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Cancel a patch job. The patch job must be active. Canceled patch jobs cannot
 *  be restarted.
 *
 *  Method: osconfig.projects.patchJobs.cancel
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchJobsCancel : GTLROSConfigQuery

/** Required. Name of the patch in the form `projects/ * /patchJobs/ *` */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROSConfig_PatchJob.
 *
 *  Cancel a patch job. The patch job must be active. Canceled patch jobs cannot
 *  be restarted.
 *
 *  @param object The @c GTLROSConfig_CancelPatchJobRequest to include in the
 *    query.
 *  @param name Required. Name of the patch in the form `projects/ * /patchJobs/
 *    *`
 *
 *  @return GTLROSConfigQuery_ProjectsPatchJobsCancel
 */
+ (instancetype)queryWithObject:(GTLROSConfig_CancelPatchJobRequest *)object
                           name:(NSString *)name;

@end

/**
 *  Patch VM instances by creating and running a patch job.
 *
 *  Method: osconfig.projects.patchJobs.execute
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchJobsExecute : GTLROSConfigQuery

/**
 *  Required. The project in which to run this patch in the form `projects/ *`
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROSConfig_PatchJob.
 *
 *  Patch VM instances by creating and running a patch job.
 *
 *  @param object The @c GTLROSConfig_ExecutePatchJobRequest to include in the
 *    query.
 *  @param parent Required. The project in which to run this patch in the form
 *    `projects/ *`
 *
 *  @return GTLROSConfigQuery_ProjectsPatchJobsExecute
 */
+ (instancetype)queryWithObject:(GTLROSConfig_ExecutePatchJobRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Get the patch job. This can be used to track the progress of an ongoing
 *  patch job or review the details of completed jobs.
 *
 *  Method: osconfig.projects.patchJobs.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchJobsGet : GTLROSConfigQuery

/** Required. Name of the patch in the form `projects/ * /patchJobs/ *` */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLROSConfig_PatchJob.
 *
 *  Get the patch job. This can be used to track the progress of an ongoing
 *  patch job or review the details of completed jobs.
 *
 *  @param name Required. Name of the patch in the form `projects/ * /patchJobs/
 *    *`
 *
 *  @return GTLROSConfigQuery_ProjectsPatchJobsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Get a list of instance details for a given patch job.
 *
 *  Method: osconfig.projects.patchJobs.instanceDetails.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchJobsInstanceDetailsList : GTLROSConfigQuery

/**
 *  A filter expression that filters results listed in the response. This field
 *  supports filtering results by instance zone, name, state, or
 *  `failure_reason`.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/**
 *  The maximum number of instance details records to return. Default is 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call that indicates where this
 *  listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The parent for the instances are in the form of `projects/ *
 *  /patchJobs/ *`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROSConfig_ListPatchJobInstanceDetailsResponse.
 *
 *  Get a list of instance details for a given patch job.
 *
 *  @param parent Required. The parent for the instances are in the form of
 *    `projects/ * /patchJobs/ *`.
 *
 *  @return GTLROSConfigQuery_ProjectsPatchJobsInstanceDetailsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Get a list of patch jobs.
 *
 *  Method: osconfig.projects.patchJobs.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeOSConfigCloudPlatform
 */
@interface GTLROSConfigQuery_ProjectsPatchJobsList : GTLROSConfigQuery

/**
 *  If provided, this field specifies the criteria that must be met by patch
 *  jobs to be included in the response. Currently, filtering is only available
 *  on the patch_deployment field.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** The maximum number of instance status to return. */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A pagination token returned from a previous call that indicates where this
 *  listing should continue from.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/** Required. In the form of `projects/ *` */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLROSConfig_ListPatchJobsResponse.
 *
 *  Get a list of patch jobs.
 *
 *  @param parent Required. In the form of `projects/ *`
 *
 *  @return GTLROSConfigQuery_ProjectsPatchJobsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
