#import "RCTBridgeModule.h"

@interface ReactNativeExif : NSObject <RCTBridgeModule>

+ (void)getExif:(NSString *)path resolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject;

@end
