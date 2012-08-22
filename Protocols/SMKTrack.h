//
//  SMKTrack.h
//  SNRMusicKit
//
//  Created by Indragie Karunaratne on 2012-08-21.
//  Copyright (c) 2012 Indragie Karunaratne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMKAlbum.h"
#import "SMKArtist.h"
#import "SMKContentSource.h"

#import "SMKContentObject.h"
#import "SMKWebObject.h"

@protocol SMKTrack <NSObject, SMKContentObject, SMKWebObject>
@required
/**
 @return The artist of the track.
 */
- (id<SMKArtist>)artist;

/**
 @return The album of the track.
 */
- (id<SMKAlbum>)album;

/**
 @return The duration of the track in seconds.
 */
- (NSTimeInterval)duration;

/**
 @return The URL to play the track from
 @discussion This URL could be local or remote (for streaming services)
 */
- (NSURL *)playbackURL;

@optional

/**
 @return The composer of the track.
 */
- (NSString *)composer;

/**
 @return The track's track number.
 */
- (NSNumber *)trackNumber;

/**
 @return The track's disc number.
*/
- (NSNumber *)discNumber;

/**
 @return The number of times the track has been played.
 */
- (NSUInteger)playCounts;

/**
 @return The popularity index for the track.
 @discussion This value can have different scales depending on the content source,
 but in general, a higher popularity index means the track is more popular. If this
 information is not available, this method will return 0.
*/
- (NSUInteger)popularity;

/**
 @return Whether the track contains explicit content.
 */
- (BOOL)isExplicit;

/**
 @return Whether the track is free of explicit content.
 */
- (BOOL)isClean;

/**
 @return Whether the track can be streamed from the content source.
 */
- (BOOL)canStream;

/**
 Plays the tracks
 @return Whether the track was successfully played.
 @param error An NSError object with error information if it was unsuccessful.
 */
- (BOOL)playWithError:(NSError **)error;
@end
