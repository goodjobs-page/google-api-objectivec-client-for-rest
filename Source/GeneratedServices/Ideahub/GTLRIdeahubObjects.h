// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Idea Hub API (ideahub/v1beta)
// Documentation:
//   https://console.cloud.google.com/apis/library/ideahub.googleapis.com

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

@class GTLRIdeahub_GoogleSearchIdeahubV1betaAvailableLocale;
@class GTLRIdeahub_GoogleSearchIdeahubV1betaIdea;
@class GTLRIdeahub_GoogleSearchIdeahubV1betaTopic;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity.type

/**
 *  An idea activity type indicating a post has been deleted.
 *
 *  Value: "POST_DELETED"
 */
FOUNDATION_EXTERN NSString * const kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostDeleted;
/**
 *  An idea activity type indicating a post has been drafted.
 *
 *  Value: "POST_DRAFTED"
 */
FOUNDATION_EXTERN NSString * const kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostDrafted;
/**
 *  An idea activity type indicating a post has been published.
 *
 *  Value: "POST_PUBLISHED"
 */
FOUNDATION_EXTERN NSString * const kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostPublished;
/**
 *  An idea activity type indicating a post has been unpublished.
 *
 *  Value: "POST_UNPUBLISHED"
 */
FOUNDATION_EXTERN NSString * const kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostUnpublished;
/**
 *  An unspecified, unknown type of idea activity.
 *
 *  Value: "TYPE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_TypeUnspecified;

/**
 *  Represents locales that are available for a web property.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaAvailableLocale : GTLRObject

/** A string in BCP 47 format, without a resource prefix. */
@property(nonatomic, copy, nullable) NSString *locale;

/**
 *  A string in BCP 47 format, prefixed with the platform and property name, and
 *  "locales/". Format:
 *  platforms/{platform}/properties/{property}/locales/{locale}
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  A single Idea that we want to show the end user.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaIdea : GTLRObject

/** Unique identifier for the idea. Format: ideas/{ideaId} */
@property(nonatomic, copy, nullable) NSString *name;

/** The idea’s text. */
@property(nonatomic, copy, nullable) NSString *text;

/** The Topics that match the idea. */
@property(nonatomic, strong, nullable) NSArray<GTLRIdeahub_GoogleSearchIdeahubV1betaTopic *> *topics;

@end


/**
 *  An idea activity entry.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity : GTLRObject

/** The Idea IDs for this entry. If empty, topics should be set. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *ideas;

/**
 *  Unique identifier for the idea activity. The name is ignored when creating
 *  an idea activity. Format:
 *  platforms/{platform}/properties/{property}/ideaActivities/{idea_activity}
 */
@property(nonatomic, copy, nullable) NSString *name;

/** The Topic IDs for this entry. If empty, ideas should be set. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *topics;

/**
 *  The type of activity performed.
 *
 *  Likely values:
 *    @arg @c kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostDeleted
 *        An idea activity type indicating a post has been deleted. (Value:
 *        "POST_DELETED")
 *    @arg @c kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostDrafted
 *        An idea activity type indicating a post has been drafted. (Value:
 *        "POST_DRAFTED")
 *    @arg @c kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostPublished
 *        An idea activity type indicating a post has been published. (Value:
 *        "POST_PUBLISHED")
 *    @arg @c kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_PostUnpublished
 *        An idea activity type indicating a post has been unpublished. (Value:
 *        "POST_UNPUBLISHED")
 *    @arg @c kGTLRIdeahub_GoogleSearchIdeahubV1betaIdeaActivity_Type_TypeUnspecified
 *        An unspecified, unknown type of idea activity. (Value:
 *        "TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *type;

/** The uri the activity relates to. */
@property(nonatomic, copy, nullable) NSString *uri;

@end


/**
 *  Represents idea state specific to a web property.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaIdeaState : GTLRObject

/**
 *  Whether the idea is dismissed.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dismissed;

/**
 *  Unique identifier for the idea state. Format:
 *  platforms/{platform}/properties/{property}/ideaStates/{idea_state}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Whether the idea is saved.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *saved;

@end


/**
 *  Response for whether ideas are available for a given web property on a
 *  platform, for the currently logged-in user.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "availableLocales" property. If returned as the result of a query,
 *        it should support automatic pagination (when @c shouldFetchNextPages
 *        is enabled).
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaListAvailableLocalesResponse : GTLRCollectionObject

/**
 *  Locales for which ideas are available for the given Creator.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRIdeahub_GoogleSearchIdeahubV1betaAvailableLocale *> *availableLocales;

/**
 *  A token that can be sent as `page_token` to retrieve the next page. If this
 *  field is omitted, there are no subsequent pages.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRIdeahub_GoogleSearchIdeahubV1betaListIdeasResponse
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "ideas" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaListIdeasResponse : GTLRCollectionObject

/**
 *  Results for the ListIdeasRequest.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRIdeahub_GoogleSearchIdeahubV1betaIdea *> *ideas;

/** Used to fetch the next page in a subsequent request. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Represents a Topic umbrella for a list of questions that a Creator may want
 *  to respond to.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaTopic : GTLRObject

/** String displayed to the creator indicating the name of the Topic. */
@property(nonatomic, copy, nullable) NSString *displayName;

/** The mID of the topic. */
@property(nonatomic, copy, nullable) NSString *mid;

/** Unique identifier for the topic. Format: topics/{topic} */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Represents topic state specific to a web property.
 */
@interface GTLRIdeahub_GoogleSearchIdeahubV1betaTopicState : GTLRObject

/**
 *  Whether the topic is dismissed.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *dismissed;

/**
 *  Unique identifier for the topic state. Format:
 *  platforms/{platform}/properties/{property}/topicStates/{topic_state}
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Whether the topic is saved.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *saved;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
