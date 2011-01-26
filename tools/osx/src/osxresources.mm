#import <Foundation/NSString.h>
#import <Foundation/NSBundle.h>

const char * get_bundle_path(void) {
	NSBundle* ourBundle = [NSBundle bundleWithIdentifier:@"com.studionumbersix.foo.yc20"];
	NSString* resourcesPath = [ourBundle resourcePath];
	return [resourcesPath UTF8String];
}
