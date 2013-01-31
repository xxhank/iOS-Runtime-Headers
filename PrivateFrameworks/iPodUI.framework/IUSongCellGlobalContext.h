/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableSet;

@interface IUSongCellGlobalContext : IUMediaItemCellGlobalContext  {
    NSMutableSet *_displayedStringProperties;
    BOOL _hasIndexBar;
    unsigned int _showAlbumSubtitle : 1;
    unsigned int _showArtistSubtitle : 1;
    id _aggregateProperties;
}

@property BOOL hasIndexBar;
@property BOOL showAlbumSubtitle;
@property BOOL showArtistSubtitle;
@property(retain) id aggregateProperties;


- (void)setHasIndexBar:(BOOL)arg1;
- (BOOL)hasIndexBar;
- (void)setAggregateProperties:(id)arg1;
- (id)aggregateProperties;
- (void)setShowArtistSubtitle:(BOOL)arg1;
- (BOOL)showArtistSubtitle;
- (void)setShowAlbumSubtitle:(BOOL)arg1;
- (BOOL)showAlbumSubtitle;
- (BOOL)showsValueForProperty:(id)arg1;
- (id)initWithPropertiesFromDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)setShowsValue:(BOOL)arg1 forProperty:(id)arg2;
- (void)dealloc;

@end