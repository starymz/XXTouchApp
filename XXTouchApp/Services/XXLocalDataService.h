//
//  XXLocalDataService.h
//  XXTouchApp
//
//  Created by Zheng on 8/30/16.
//  Copyright © 2016 Zheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XXLocalFileModel.h"

@interface XXLocalDataService : NSObject
+ (id)sharedInstance;

@property (nonatomic, strong) NSArray <XXLocalFileModel *> *localFiles;
@property (nonatomic, strong) NSString *rootPath;
@property (nonatomic, strong) NSString *libraryPath;
@property (nonatomic, strong) NSDateFormatter *defaultDateFormatter;
@property (nonatomic, strong) NSString *selectedItem;

@end