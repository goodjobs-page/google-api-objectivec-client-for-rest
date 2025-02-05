// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Idea Hub API (ideahub/v1beta)
// Documentation:
//   https://console.cloud.google.com/apis/library/ideahub.googleapis.com

#import "GTLRIdeahubQuery.h"

#import "GTLRIdeahubObjects.h"

@implementation GTLRIdeahubQuery

@dynamic fields;

@end

@implementation GTLRIdeahubQuery_PlatformsPropertiesIdeaActivitiesCreate

@dynamic parent;

+ (instancetype)queryWithObject:(GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity *)object
                         parent:(NSString *)parent {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/ideaActivities";
  GTLRIdeahubQuery_PlatformsPropertiesIdeaActivitiesCreate *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"POST"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.parent = parent;
  query.expectedObjectClass = [GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity class];
  query.loggingName = @"ideahub.platforms.properties.ideaActivities.create";
  return query;
}

@end

@implementation GTLRIdeahubQuery_PlatformsPropertiesIdeasList

@dynamic filter, orderBy, pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/ideas";
  GTLRIdeahubQuery_PlatformsPropertiesIdeasList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRIdeahub_GoogleSearchIdeahubV1betaListIdeasResponse class];
  query.loggingName = @"ideahub.platforms.properties.ideas.list";
  return query;
}

@end

@implementation GTLRIdeahubQuery_PlatformsPropertiesIdeaStatesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaState *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRIdeahubQuery_PlatformsPropertiesIdeaStatesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaState class];
  query.loggingName = @"ideahub.platforms.properties.ideaStates.patch";
  return query;
}

@end

@implementation GTLRIdeahubQuery_PlatformsPropertiesLocalesList

@dynamic pageSize, pageToken, parent;

+ (instancetype)queryWithParent:(NSString *)parent {
  NSArray *pathParams = @[ @"parent" ];
  NSString *pathURITemplate = @"v1beta/{+parent}/locales";
  GTLRIdeahubQuery_PlatformsPropertiesLocalesList *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:nil
                       pathParameterNames:pathParams];
  query.parent = parent;
  query.expectedObjectClass = [GTLRIdeahub_GoogleSearchIdeahubV1betaListAvailableLocalesResponse class];
  query.loggingName = @"ideahub.platforms.properties.locales.list";
  return query;
}

@end

@implementation GTLRIdeahubQuery_PlatformsPropertiesTopicStatesPatch

@dynamic name, updateMask;

+ (instancetype)queryWithObject:(GTLRIdeahub_GoogleSearchIdeahubV1betaTopicState *)object
                           name:(NSString *)name {
  if (object == nil) {
#if defined(DEBUG) && DEBUG
    NSAssert(object != nil, @"Got a nil object");
#endif
    return nil;
  }
  NSArray *pathParams = @[ @"name" ];
  NSString *pathURITemplate = @"v1beta/{+name}";
  GTLRIdeahubQuery_PlatformsPropertiesTopicStatesPatch *query =
    [[self alloc] initWithPathURITemplate:pathURITemplate
                               HTTPMethod:@"PATCH"
                       pathParameterNames:pathParams];
  query.bodyObject = object;
  query.name = name;
  query.expectedObjectClass = [GTLRIdeahub_GoogleSearchIdeahubV1betaTopicState class];
  query.loggingName = @"ideahub.platforms.properties.topicStates.patch";
  return query;
}

@end
