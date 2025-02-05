// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase App Check API (firebaseappcheck/v1beta)
// Description:
//   App Check works alongside other Firebase services to help protect your
//   backend resources from abuse, such as billing fraud or phishing. With App
//   Check, devices running your app will use an app or device attestation
//   provider that attests to one or both of the following: * Requests originate
//   from your authentic app * Requests originate from an authentic, untampered
//   device This attestation is attached to every request your app makes to your
//   Firebase backend resources. The Firebase App Check REST API allows you to
//   manage your App Check configurations programmatically. It also allows you
//   to exchange attestation material for App Check tokens directly without
//   using a Firebase SDK. Finally, it allows you to obtain the public key set
//   necessary to validate an App Check token yourself. [Learn more about App
//   Check](https://firebase.google.com/docs/app-check).
// Documentation:
//   https://firebase.google.com/docs/app-check

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: See, edit, configure, and delete your Google Cloud data
 *  and see the email address for your Google Account.
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFirebaseappcheckCloudPlatform;
/**
 *  Authorization scope: View and administer all your Firebase data and settings
 *
 *  Value "https://www.googleapis.com/auth/firebase"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeFirebaseappcheckFirebase;

// ----------------------------------------------------------------------------
//   GTLRFirebaseappcheckService
//

/**
 *  Service for executing Firebase App Check API queries.
 *
 *  App Check works alongside other Firebase services to help protect your
 *  backend resources from abuse, such as billing fraud or phishing. With App
 *  Check, devices running your app will use an app or device attestation
 *  provider that attests to one or both of the following: * Requests originate
 *  from your authentic app * Requests originate from an authentic, untampered
 *  device This attestation is attached to every request your app makes to your
 *  Firebase backend resources. The Firebase App Check REST API allows you to
 *  manage your App Check configurations programmatically. It also allows you to
 *  exchange attestation material for App Check tokens directly without using a
 *  Firebase SDK. Finally, it allows you to obtain the public key set necessary
 *  to validate an App Check token yourself. [Learn more about App
 *  Check](https://firebase.google.com/docs/app-check).
 */
@interface GTLRFirebaseappcheckService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRFirebaseappcheckQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
