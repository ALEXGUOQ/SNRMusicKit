//
//  NSManagedObjectContext+SMKAdditions.h
//  SNRMusicKit
//
//  Created by Indragie Karunaratne on 2012-08-22.
//  Copyright (c) 2012 Indragie Karunaratne. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface NSManagedObjectContext (SMKAdditions)
- (BOOL)SMK_saveChanges;
@end
