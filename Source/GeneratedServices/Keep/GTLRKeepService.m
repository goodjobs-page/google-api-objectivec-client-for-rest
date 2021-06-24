// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Keep API (keep/v1)
// Description:
//   This API is an enterprise-only API used to create and manage the Keep notes
//   within your domain, including resolving issues identified by CASB software.
// Documentation:
//   https://support.google.com/keep

#import "GTLRKeep.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeKeep = @"https://www.googleapis.com/auth/keep";

// ----------------------------------------------------------------------------
//   GTLRKeepService
//

@implementation GTLRKeepService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://keep.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
