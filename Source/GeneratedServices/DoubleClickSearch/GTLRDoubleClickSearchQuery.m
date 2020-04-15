// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Search Ads 360 API (doubleclicksearch/v2)
// Description:
//   Reports and modifies your advertising data in DoubleClick Search (for
//   example, campaigns, ad groups, keywords, and conversions).
// Documentation:
//   https://developers.google.com/doubleclick-search/

#import "GTLRDoubleClickSearchQuery.h"

#import "GTLRDoubleClickSearchObjects.h"

@implementation GTLRDoubleClickSearchQuery

@dynamic fields;

@end

@implementation GTLRDoubleClickSearchQuery_ConversionGet

@dynamic adGroupId, adId, advertiserId, agencyId, campaignId, criterionId,
         endDate, engineAccountId, rowCount, startDate, startRow;

+ (instancetype)queryWithAgencyId:(long long)agencyId
                     advertiserId:(long long)advertiserId
                  engineAccountId:(long long)engineAccountId
                          endDate:(NSInteger)endDate
                         rowCount:(NSInteger)rowCount
                        startDate:(NSInteger)startDate
                         startRow:(NSUInteger)startRow {
  NSArray *pathParams = @[
    @"advertiserId", @"agencyId", @"engineAccountId"
  ];
  NSString *pathURITemplate = @"agency/{agencyId}/advertiser/{advertiserId}/engine/{engineAccountId}/conversion";
  GTLRDoubleClickSearchQuery_ConversionGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.agencyId = agencyId;
  query.advertiserId = advertiserId;
  query.engineAccountId = engineAccountId;
  query.endDate = endDate;
  query.rowCount = rowCount;
  query.startDate = startDate;
  query.startRow = startRow;
  query.expectedObjectClass = [GTLRDoubleClickSearch_ConversionList class];
  query.loggingName = @"doubleclicksearch.conversion.get";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ConversionInsert

+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ConversionList *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"conversion";
  GTLRDoubleClickSearchQuery_ConversionInsert *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickSearch_ConversionList class];
  query.loggingName = @"doubleclicksearch.conversion.insert";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ConversionUpdate

+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ConversionList *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"conversion";
  GTLRDoubleClickSearchQuery_ConversionUpdate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PUT"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickSearch_ConversionList class];
  query.loggingName = @"doubleclicksearch.conversion.update";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ConversionUpdateAvailability

+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_UpdateAvailabilityRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"conversion/updateAvailability";
  GTLRDoubleClickSearchQuery_ConversionUpdateAvailability *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickSearch_UpdateAvailabilityResponse class];
  query.loggingName = @"doubleclicksearch.conversion.updateAvailability";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ReportsGenerate

+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ReportRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"reports/generate";
  GTLRDoubleClickSearchQuery_ReportsGenerate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickSearch_Report class];
  query.loggingName = @"doubleclicksearch.reports.generate";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ReportsGet

@dynamic reportId;

+ (instancetype)queryWithReportId:(NSString *)reportId {
  NSArray *pathParams = @[ @"reportId" ];
  NSString *pathURITemplate = @"reports/{reportId}";
  GTLRDoubleClickSearchQuery_ReportsGet *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.reportId = reportId;
  query.expectedObjectClass = [GTLRDoubleClickSearch_Report class];
  query.loggingName = @"doubleclicksearch.reports.get";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ReportsGetFile

@dynamic reportFragment, reportId;

+ (instancetype)queryWithReportId:(NSString *)reportId
                   reportFragment:(NSInteger)reportFragment {
  NSArray *pathParams = @[
    @"reportFragment", @"reportId"
  ];
  NSString *pathURITemplate = @"reports/{reportId}/files/{reportFragment}";
  GTLRDoubleClickSearchQuery_ReportsGetFile *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.reportId = reportId;
  query.reportFragment = reportFragment;
  query.loggingName = @"doubleclicksearch.reports.getFile";
  return query;
}

+ (instancetype)queryForMediaWithReportId:(NSString *)reportId
                           reportFragment:(NSInteger)reportFragment {
  GTLRDoubleClickSearchQuery_ReportsGetFile *query =
    [self queryWithReportId:reportId
             reportFragment:reportFragment];
  query.downloadAsDataObjectType = @"media";
  query.useMediaDownloadService = YES;
  query.loggingName = @"Download doubleclicksearch.reports.getFile";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_ReportsRequest

+ (instancetype)queryWithObject:(GTLRDoubleClickSearch_ReportRequest *)object {
  if (object == nil) {
    GTLR_DEBUG_ASSERT(object != nil, @"Got a nil object");
    return nil;
  }
  NSString *pathURITemplate = @"reports";
  GTLRDoubleClickSearchQuery_ReportsRequest *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:nil];
  query.bodyObject = object;
  query.expectedObjectClass = [GTLRDoubleClickSearch_Report class];
  query.loggingName = @"doubleclicksearch.reports.request";
  return query;
}

@end

@implementation GTLRDoubleClickSearchQuery_SavedColumnsList

@dynamic advertiserId, agencyId;

+ (instancetype)queryWithAgencyId:(long long)agencyId
                     advertiserId:(long long)advertiserId {
  NSArray *pathParams = @[
    @"advertiserId", @"agencyId"
  ];
  NSString *pathURITemplate = @"agency/{agencyId}/advertiser/{advertiserId}/savedcolumns";
  GTLRDoubleClickSearchQuery_SavedColumnsList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.agencyId = agencyId;
  query.advertiserId = advertiserId;
  query.expectedObjectClass = [GTLRDoubleClickSearch_SavedColumnList class];
  query.loggingName = @"doubleclicksearch.savedColumns.list";
  return query;
}

@end
