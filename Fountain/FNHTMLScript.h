//
//  FNHTMLScript.h
//	Modified for Beat
//
//  Copyright (c) 2012-2013 Nima Yousefi & John August
//  Parts copyright (c) 2019 Lauri-Matti Parppei / KAPITAN!
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy 
//  of this software and associated documentation files (the "Software"), to 
//  deal in the Software without restriction, including without limitation the 
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
//  sell copies of the Software, and to permit persons to whom the Software is 
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in 
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
//  IN THE SOFTWARE.
//


#if TARGET_OS_IPHONE
    #define QUQFont UIFont
#else
    #define QUQFont NSFont
    #import <Cocoa/Cocoa.h>
#endif

#import <Foundation/Foundation.h>

@class FNScript;
@class FNPaginator;

@interface FNHTMLScript : NSObject

@property (strong, nonatomic) QUQFont *font;
@property (strong, nonatomic) FNScript *script;
@property (strong, nonatomic) NSDocument *document;
@property (strong, nonatomic) NSNumber *customPage;
@property (strong, nonatomic) NSNumber *forRendering;
@property (nonatomic) bool print;

- (id)initWithScript:(FNScript *)aScript;
- (id)initWithScript:(FNScript *)aScript document:(NSDocument*)aDocument;
- (id)initWithScript:(FNScript *)aScript print:(bool)print;
- (id)initWithScript:(FNScript *)aScript document:(NSDocument*)aDocument print:(bool)print;

- (NSString *)html;
- (NSString *)htmlClassForType:(NSString *)elementType;

@end
