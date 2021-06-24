// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Idea Hub API (ideahub/v1alpha)
// Documentation:
//   https://console.cloud.google.com/apis/library/ideahub.googleapis.com

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

@class GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState;
@class GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// creatorPlatform

/** Value: "BLOGGER" */
FOUNDATION_EXTERN NSString * const kGTLRIdeahubCreatorPlatformBlogger;
/** Value: "SITEKIT" */
FOUNDATION_EXTERN NSString * const kGTLRIdeahubCreatorPlatformSitekit;
/** Value: "UNKNOWN" */
FOUNDATION_EXTERN NSString * const kGTLRIdeahubCreatorPlatformUnknown;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Ideahub query classes.
 */
@interface GTLRIdeahubQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  List ideas for a given Creator and filter and sort options.
 *
 *  Method: ideahub.ideas.list
 */
@interface GTLRIdeahubQuery_IdeasList : GTLRIdeahubQuery

/**
 *  Identifies the platform from which this user is accessing Idea Hub.
 *
 *  Likely values:
 *    @arg @c kGTLRIdeahubCreatorPlatformUnknown Value "UNKNOWN"
 *    @arg @c kGTLRIdeahubCreatorPlatformBlogger Value "BLOGGER"
 *    @arg @c kGTLRIdeahubCreatorPlatformSitekit Value "SITEKIT"
 */
@property(nonatomic, copy, nullable) NSString *creatorPlatform;

/**
 *  Identifies the platform account (blog/site/etc.) for which to fetch Ideas.
 */
@property(nonatomic, copy, nullable) NSString *creatorPlatformId;

/**
 *  Allows filtering. Supported syntax: * Filter expressions are made up of one
 *  or more restrictions. * Restrictions are implicitly combined, as if the
 *  `AND` operator was always used. The `OR` operator is currently unsupported.
 *  * Supported functions: - `saved(bool)`: If set to true, fetches only saved
 *  ideas. If set to false, fetches all except saved ideas. Can't be
 *  simultaneously used with `dismissed(bool)`. - `dismissed(bool)`: If set to
 *  true, fetches only dismissed ideas. Can't be simultaneously used with
 *  `saved(bool)`. The `false` value is currently unsupported. Examples: *
 *  `saved(true)` * `saved(false)` * `dismissed(true)` The length of this field
 *  should be no more than 500 characters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Order semantics described below. */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  The maximum number of ideas per page. If unspecified, at most 10 ideas will
 *  be returned. The maximum value is 2000; values above 2000 will be coerced to
 *  2000.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Used to fetch next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  If defined, specifies the creator for which to filter by. Format:
 *  publishers/{publisher}/properties/{property}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRIdeahub_GoogleSearchIdeahubV1alphaListIdeasResponse.
 *
 *  List ideas for a given Creator and filter and sort options.
 *
 *  @return GTLRIdeahubQuery_IdeasList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)query;

@end

/**
 *  List ideas for a given Creator and filter and sort options.
 *
 *  Method: ideahub.platforms.properties.ideas.list
 */
@interface GTLRIdeahubQuery_PlatformsPropertiesIdeasList : GTLRIdeahubQuery

/**
 *  Identifies the platform from which this user is accessing Idea Hub.
 *
 *  Likely values:
 *    @arg @c kGTLRIdeahubCreatorPlatformUnknown Value "UNKNOWN"
 *    @arg @c kGTLRIdeahubCreatorPlatformBlogger Value "BLOGGER"
 *    @arg @c kGTLRIdeahubCreatorPlatformSitekit Value "SITEKIT"
 */
@property(nonatomic, copy, nullable) NSString *creatorPlatform;

/**
 *  Identifies the platform account (blog/site/etc.) for which to fetch Ideas.
 */
@property(nonatomic, copy, nullable) NSString *creatorPlatformId;

/**
 *  Allows filtering. Supported syntax: * Filter expressions are made up of one
 *  or more restrictions. * Restrictions are implicitly combined, as if the
 *  `AND` operator was always used. The `OR` operator is currently unsupported.
 *  * Supported functions: - `saved(bool)`: If set to true, fetches only saved
 *  ideas. If set to false, fetches all except saved ideas. Can't be
 *  simultaneously used with `dismissed(bool)`. - `dismissed(bool)`: If set to
 *  true, fetches only dismissed ideas. Can't be simultaneously used with
 *  `saved(bool)`. The `false` value is currently unsupported. Examples: *
 *  `saved(true)` * `saved(false)` * `dismissed(true)` The length of this field
 *  should be no more than 500 characters.
 */
@property(nonatomic, copy, nullable) NSString *filter;

/** Order semantics described below. */
@property(nonatomic, copy, nullable) NSString *orderBy;

/**
 *  The maximum number of ideas per page. If unspecified, at most 10 ideas will
 *  be returned. The maximum value is 2000; values above 2000 will be coerced to
 *  2000.
 */
@property(nonatomic, assign) NSInteger pageSize;

/** Used to fetch next page. */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  If defined, specifies the creator for which to filter by. Format:
 *  publishers/{publisher}/properties/{property}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRIdeahub_GoogleSearchIdeahubV1alphaListIdeasResponse.
 *
 *  List ideas for a given Creator and filter and sort options.
 *
 *  @param parent If defined, specifies the creator for which to filter by.
 *    Format: publishers/{publisher}/properties/{property}
 *
 *  @return GTLRIdeahubQuery_PlatformsPropertiesIdeasList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update an idea state resource.
 *
 *  Method: ideahub.platforms.properties.ideaStates.patch
 */
@interface GTLRIdeahubQuery_PlatformsPropertiesIdeaStatesPatch : GTLRIdeahubQuery

/**
 *  Unique identifier for the idea state. Format:
 *  platforms/{platform}/properties/{property}/ideaStates/{idea_state}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The list of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState.
 *
 *  Update an idea state resource.
 *
 *  @param object The @c GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState to
 *    include in the query.
 *  @param name Unique identifier for the idea state. Format:
 *    platforms/{platform}/properties/{property}/ideaStates/{idea_state}
 *
 *  @return GTLRIdeahubQuery_PlatformsPropertiesIdeaStatesPatch
 */
+ (instancetype)queryWithObject:(GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState *)object
                           name:(NSString *)name;

@end

/**
 *  Returns which locales ideas are available in for a given Creator.
 *
 *  Method: ideahub.platforms.properties.locales.list
 */
@interface GTLRIdeahubQuery_PlatformsPropertiesLocalesList : GTLRIdeahubQuery

/**
 *  The maximum number of locales to return. The service may return fewer than
 *  this value. If unspecified, at most 100 locales will be returned. The
 *  maximum value is 100; values above 100 will be coerced to 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  A page token, received from a previous `ListAvailableLocales` call. Provide
 *  this to retrieve the subsequent page. When paginating, all other parameters
 *  provided to `ListAvailableLocales` must match the call that provided the
 *  page token.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. The web property to check idea availability for Format:
 *  platforms/{platform}/property/{property}
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c
 *  GTLRIdeahub_GoogleSearchIdeahubV1alphaListAvailableLocalesResponse.
 *
 *  Returns which locales ideas are available in for a given Creator.
 *
 *  @param parent Required. The web property to check idea availability for
 *    Format: platforms/{platform}/property/{property}
 *
 *  @return GTLRIdeahubQuery_PlatformsPropertiesLocalesList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Update a topic state resource.
 *
 *  Method: ideahub.platforms.properties.topicStates.patch
 */
@interface GTLRIdeahubQuery_PlatformsPropertiesTopicStatesPatch : GTLRIdeahubQuery

/**
 *  Unique identifier for the topic state. Format:
 *  platforms/{platform}/properties/{property}/topicStates/{topic_state}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The list of fields to be updated.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

/**
 *  Fetches a @c GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState.
 *
 *  Update a topic state resource.
 *
 *  @param object The @c GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState to
 *    include in the query.
 *  @param name Unique identifier for the topic state. Format:
 *    platforms/{platform}/properties/{property}/topicStates/{topic_state}
 *
 *  @return GTLRIdeahubQuery_PlatformsPropertiesTopicStatesPatch
 */
+ (instancetype)queryWithObject:(GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
