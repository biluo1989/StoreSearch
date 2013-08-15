//
//  SearchResultCell.h
//  StoreSearch
//
//  Created by APPLE on 13-8-15.
//  Copyright (c) 2013年 Yujiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchResultCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *artistNameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *artworkImageView;

@end
