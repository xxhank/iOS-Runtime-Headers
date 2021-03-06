/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    BOOL  _cancelled;
    int  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    NSDictionary * _dictationResponse;
    BOOL  _dictationStable;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    BOOL  _finished;
    BOOL  _grouped;
    BOOL  _infinitePatience;
    BOOL  _internal;
    BOOL  _isWideScreen;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    NSArray * _markedTextArray;
    long  _maxCount;
    unsigned int  _queryID;
    unsigned long long  _queryIdent;
    NSArray * _searchDomains;
    NSString * _searchString;
    unsigned int  _whyQuery;
    NSArray * markedTextArray;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic) int contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, retain) NSDictionary *dictationResponse;
@property (nonatomic) BOOL dictationStable;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, readonly) NSArray *disabledDomains;
@property (nonatomic) BOOL grouped;
@property (nonatomic, readonly) BOOL hasMarkedText;
@property (nonatomic) BOOL infinitePatience;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL isWideScreen;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic, readonly) NSArray *markedTextArray;
@property (nonatomic) long maxCount;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic) unsigned int whyQuery;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (BOOL)cancelled;
- (int)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (id)dictationResponse;
- (BOOL)dictationStable;
- (id)disabledBundles;
- (id)disabledDomains;
- (void)execute:(id /* block */)arg1;
- (BOOL)grouped;
- (BOOL)hasMarkedText;
- (unsigned int)hash;
- (BOOL)infinitePatience;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledBundles:(id)arg4;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 forSearchDomains:(id)arg3 disabledDomains:(id)arg4 disabledBundles:(id)arg5;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 keyboardPrimaryLanguage:(id)arg3 forSearchDomains:(id)arg4 disabledDomains:(id)arg5 disabledBundles:(id)arg6;
- (BOOL)internal;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWideScreen;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (id)markedTextArray;
- (long)maxCount;
- (unsigned long long)queryIdent;
- (id)searchDomains;
- (id)searchString;
- (void)setContentFilters:(int)arg1;
- (void)setDictationResponse:(id)arg1;
- (void)setDictationStable:(BOOL)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(BOOL)arg1;
- (void)setInfinitePatience:(BOOL)arg1;
- (void)setInternal:(BOOL)arg1;
- (void)setIsWideScreen:(BOOL)arg1;
- (void)setMaxCount:(long)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned int)arg1;
- (unsigned int)whyQuery;

@end
