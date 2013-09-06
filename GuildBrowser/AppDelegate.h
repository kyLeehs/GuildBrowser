#import <UIKit/UIKit.h>

#ifdef DEBUG
FILE *fopen$UNIX2003(const char *filename, const char *mode);
size_t fwrite$UNIX2003(const void *ptr, size_t size, size_t nitems, FILE *stream);
#endif

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end
