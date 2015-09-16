// The MIT License (MIT)
//
// Copyright (c) 2015 Alexander Grebenyuk (github.com/kean).

#import "DFImageFetching.h"

NS_ASSUME_NONNULL_BEGIN

/*! The PHImageRequestOptionsVersion value for requesting an image asset with or without adjustments, used by the version property. Default value is PHImageRequestOptionsVersionCurrent.
 @note Should be put into DFImageRequestOptions userInfo dictionary.
 */
extern NSString *const DFPhotosKitVersionKey;

/*! Image fetcher for Photos Kit framework. Supported resources: PHAsset, NSURL with scheme com.github.kean.photos-kit.
 @note Use methods of NSURL+DFPhotosKit category to construct URLs for PHAssets.
 */
NS_CLASS_AVAILABLE_IOS(8_0) @interface DFPhotosKitImageFetcher : NSObject <DFImageFetching>

@end

NS_ASSUME_NONNULL_END
