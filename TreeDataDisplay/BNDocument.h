//
//  BNDocument.h
//  TreeDataDisplay
//
//  Created by Ben Nicholas on 11/28/11.
//  Copyright (c) 2011 Oracle Corporation. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "BNTreeNode.h"

@interface BNDocument : NSPersistentDocument {
    BNTreeNode * root_node;
}

@property (nonatomic, retain) BNTreeNode * root_node;

@end
