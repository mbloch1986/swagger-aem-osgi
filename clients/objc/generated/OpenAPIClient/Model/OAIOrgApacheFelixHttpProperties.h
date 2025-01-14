#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Adobe Experience Manager OSGI config (AEM) API
* Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
*
* OpenAPI spec version: 1.0.0-pre.0
* Contact: opensource@shinesolutions.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIConfigNodePropertyArray.h"
#import "OAIConfigNodePropertyBoolean.h"
#import "OAIConfigNodePropertyDropDown.h"
#import "OAIConfigNodePropertyInteger.h"
#import "OAIConfigNodePropertyString.h"
@protocol OAIConfigNodePropertyArray;
@class OAIConfigNodePropertyArray;
@protocol OAIConfigNodePropertyBoolean;
@class OAIConfigNodePropertyBoolean;
@protocol OAIConfigNodePropertyDropDown;
@class OAIConfigNodePropertyDropDown;
@protocol OAIConfigNodePropertyInteger;
@class OAIConfigNodePropertyInteger;
@protocol OAIConfigNodePropertyString;
@class OAIConfigNodePropertyString;



@protocol OAIOrgApacheFelixHttpProperties
@end

@interface OAIOrgApacheFelixHttpProperties : OAIObject


@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpHost;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpEnable;

@property(nonatomic) OAIConfigNodePropertyInteger* orgOsgiServiceHttpPort;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpTimeout;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpsEnable;

@property(nonatomic) OAIConfigNodePropertyInteger* orgOsgiServiceHttpPortSecure;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpsKeystore;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpsKeystorePassword;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpsKeystoreKeyPassword;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpsTruststore;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpsTruststorePassword;

@property(nonatomic) OAIConfigNodePropertyDropDown* orgApacheFelixHttpsClientcertificate;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpContextPath;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpMbeans;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpSessionTimeout;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyThreadpoolMax;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyAcceptors;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettySelectors;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyHeaderBufferSize;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyRequestBufferSize;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyResponseBufferSize;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixHttpJettyMaxFormSize;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixHttpPathExclusions;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixHttpsJettyCiphersuitesExcluded;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixHttpsJettyCiphersuitesIncluded;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpJettySendServerHeader;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixHttpsJettyProtocolsIncluded;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixHttpsJettyProtocolsExcluded;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixProxyLoadBalancerConnectionEnable;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpsJettyRenegotiateAllowed;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpsJettySessionCookieHttpOnly;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpsJettySessionCookieSecure;

@property(nonatomic) OAIConfigNodePropertyString* orgEclipseJettyServletSessionIdPathParameterName;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgEclipseJettyServletCheckingRemoteSessionIdEncoding;

@property(nonatomic) OAIConfigNodePropertyString* orgEclipseJettyServletSessionCookie;

@property(nonatomic) OAIConfigNodePropertyString* orgEclipseJettyServletSessionDomain;

@property(nonatomic) OAIConfigNodePropertyString* orgEclipseJettyServletSessionPath;

@property(nonatomic) OAIConfigNodePropertyInteger* orgEclipseJettyServletMaxAge;

@property(nonatomic) OAIConfigNodePropertyString* orgApacheFelixHttpName;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixJettyGziphandlerEnable;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixJettyGzipMinGzipSize;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixJettyGzipCompressionLevel;

@property(nonatomic) OAIConfigNodePropertyInteger* orgApacheFelixJettyGzipInflateBufferSize;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixJettyGzipSyncFlush;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipExcludedUserAgents;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipIncludedMethods;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipExcludedMethods;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipIncludedPaths;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipExcludedPaths;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipIncludedMimeTypes;

@property(nonatomic) OAIConfigNodePropertyArray* orgApacheFelixJettyGzipExcludedMimeTypes;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpSessionInvalidate;

@property(nonatomic) OAIConfigNodePropertyBoolean* orgApacheFelixHttpSessionUniqueid;

@end
