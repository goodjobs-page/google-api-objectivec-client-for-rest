// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Web Security Scanner API (websecurityscanner/v1)
// Description:
//   Scans your Compute and App Engine apps for common web vulnerabilities.
// Documentation:
//   https://cloud.google.com/security-scanner/

#import "GTLRWebSecurityScannerQuery.h"

#import "GTLRWebSecurityScannerObjects.h"

@implementation GTLRWebSecurityScannerQuery

@dynamic fields;

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_ScanConfig *)object
                         parent:(NSString *)parent {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/scanConfigs";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanConfig class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.create";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsDelete

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsDelete *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"DELETE"
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_Empty class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.delete";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanConfig class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.get";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/scanConfigs";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ListScanConfigsResponse class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.list";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_ScanConfig *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanConfig class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.patch";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsCrawledUrlsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/crawledUrls";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsCrawledUrlsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ListCrawledUrlsResponse class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.crawledUrls.list";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_Finding class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.findings.get";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsList

@dynamic filter, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/findings";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ListFindingsResponse class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.findings.list";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingTypeStatsList

@dynamic parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/findingTypeStats";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsFindingTypeStatsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ListFindingTypeStatsResponse class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.findingTypeStats.list";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsGet

@dynamic name;

+ (instancetype)queryWithName:(NSString *)name {
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanRun class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.get";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1/{+parent}/scanRuns";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ListScanRunsResponse class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.list";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsStop

@dynamic name;

+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_StopScanRunRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:stop";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsScanRunsStop *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanRun class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.scanRuns.stop";
  return query;
}

@end

@implementation GTLRWebSecurityScannerQuery_ProjectsScanConfigsStart

@dynamic name;

+ (instancetype)queryWithObject:(GTLRWebSecurityScanner_StartScanRunRequest *)object
                           name:(NSString *)name {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1/{+name}:start";
  GTLRWebSecurityScannerQuery_ProjectsScanConfigsStart *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRWebSecurityScanner_ScanRun class];
  query.loggingName = @"websecurityscanner.projects.scanConfigs.start";
  return query;
}

@end
