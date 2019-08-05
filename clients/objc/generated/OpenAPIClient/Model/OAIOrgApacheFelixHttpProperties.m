#import "OAIOrgApacheFelixHttpProperties.h"

@implementation OAIOrgApacheFelixHttpProperties

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"orgApacheFelixHttpHost": @"org.apache.felix.http.host", @"orgApacheFelixHttpEnable": @"org.apache.felix.http.enable", @"orgOsgiServiceHttpPort": @"org.osgi.service.http.port", @"orgApacheFelixHttpTimeout": @"org.apache.felix.http.timeout", @"orgApacheFelixHttpsEnable": @"org.apache.felix.https.enable", @"orgOsgiServiceHttpPortSecure": @"org.osgi.service.http.port.secure", @"orgApacheFelixHttpsKeystore": @"org.apache.felix.https.keystore", @"orgApacheFelixHttpsKeystorePassword": @"org.apache.felix.https.keystore.password", @"orgApacheFelixHttpsKeystoreKeyPassword": @"org.apache.felix.https.keystore.key.password", @"orgApacheFelixHttpsTruststore": @"org.apache.felix.https.truststore", @"orgApacheFelixHttpsTruststorePassword": @"org.apache.felix.https.truststore.password", @"orgApacheFelixHttpsClientcertificate": @"org.apache.felix.https.clientcertificate", @"orgApacheFelixHttpContextPath": @"org.apache.felix.http.context_path", @"orgApacheFelixHttpMbeans": @"org.apache.felix.http.mbeans", @"orgApacheFelixHttpSessionTimeout": @"org.apache.felix.http.session.timeout", @"orgApacheFelixHttpJettyThreadpoolMax": @"org.apache.felix.http.jetty.threadpool.max", @"orgApacheFelixHttpJettyAcceptors": @"org.apache.felix.http.jetty.acceptors", @"orgApacheFelixHttpJettySelectors": @"org.apache.felix.http.jetty.selectors", @"orgApacheFelixHttpJettyHeaderBufferSize": @"org.apache.felix.http.jetty.headerBufferSize", @"orgApacheFelixHttpJettyRequestBufferSize": @"org.apache.felix.http.jetty.requestBufferSize", @"orgApacheFelixHttpJettyResponseBufferSize": @"org.apache.felix.http.jetty.responseBufferSize", @"orgApacheFelixHttpJettyMaxFormSize": @"org.apache.felix.http.jetty.maxFormSize", @"orgApacheFelixHttpPathExclusions": @"org.apache.felix.http.path_exclusions", @"orgApacheFelixHttpsJettyCiphersuitesExcluded": @"org.apache.felix.https.jetty.ciphersuites.excluded", @"orgApacheFelixHttpsJettyCiphersuitesIncluded": @"org.apache.felix.https.jetty.ciphersuites.included", @"orgApacheFelixHttpJettySendServerHeader": @"org.apache.felix.http.jetty.sendServerHeader", @"orgApacheFelixHttpsJettyProtocolsIncluded": @"org.apache.felix.https.jetty.protocols.included", @"orgApacheFelixHttpsJettyProtocolsExcluded": @"org.apache.felix.https.jetty.protocols.excluded", @"orgApacheFelixProxyLoadBalancerConnectionEnable": @"org.apache.felix.proxy.load.balancer.connection.enable", @"orgApacheFelixHttpsJettyRenegotiateAllowed": @"org.apache.felix.https.jetty.renegotiateAllowed", @"orgApacheFelixHttpsJettySessionCookieHttpOnly": @"org.apache.felix.https.jetty.session.cookie.httpOnly", @"orgApacheFelixHttpsJettySessionCookieSecure": @"org.apache.felix.https.jetty.session.cookie.secure", @"orgEclipseJettyServletSessionIdPathParameterName": @"org.eclipse.jetty.servlet.SessionIdPathParameterName", @"orgEclipseJettyServletCheckingRemoteSessionIdEncoding": @"org.eclipse.jetty.servlet.CheckingRemoteSessionIdEncoding", @"orgEclipseJettyServletSessionCookie": @"org.eclipse.jetty.servlet.SessionCookie", @"orgEclipseJettyServletSessionDomain": @"org.eclipse.jetty.servlet.SessionDomain", @"orgEclipseJettyServletSessionPath": @"org.eclipse.jetty.servlet.SessionPath", @"orgEclipseJettyServletMaxAge": @"org.eclipse.jetty.servlet.MaxAge", @"orgApacheFelixHttpName": @"org.apache.felix.http.name", @"orgApacheFelixJettyGziphandlerEnable": @"org.apache.felix.jetty.gziphandler.enable", @"orgApacheFelixJettyGzipMinGzipSize": @"org.apache.felix.jetty.gzip.minGzipSize", @"orgApacheFelixJettyGzipCompressionLevel": @"org.apache.felix.jetty.gzip.compressionLevel", @"orgApacheFelixJettyGzipInflateBufferSize": @"org.apache.felix.jetty.gzip.inflateBufferSize", @"orgApacheFelixJettyGzipSyncFlush": @"org.apache.felix.jetty.gzip.syncFlush", @"orgApacheFelixJettyGzipExcludedUserAgents": @"org.apache.felix.jetty.gzip.excludedUserAgents", @"orgApacheFelixJettyGzipIncludedMethods": @"org.apache.felix.jetty.gzip.includedMethods", @"orgApacheFelixJettyGzipExcludedMethods": @"org.apache.felix.jetty.gzip.excludedMethods", @"orgApacheFelixJettyGzipIncludedPaths": @"org.apache.felix.jetty.gzip.includedPaths", @"orgApacheFelixJettyGzipExcludedPaths": @"org.apache.felix.jetty.gzip.excludedPaths", @"orgApacheFelixJettyGzipIncludedMimeTypes": @"org.apache.felix.jetty.gzip.includedMimeTypes", @"orgApacheFelixJettyGzipExcludedMimeTypes": @"org.apache.felix.jetty.gzip.excludedMimeTypes", @"orgApacheFelixHttpSessionInvalidate": @"org.apache.felix.http.session.invalidate", @"orgApacheFelixHttpSessionUniqueid": @"org.apache.felix.http.session.uniqueid" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"orgApacheFelixHttpHost", @"orgApacheFelixHttpEnable", @"orgOsgiServiceHttpPort", @"orgApacheFelixHttpTimeout", @"orgApacheFelixHttpsEnable", @"orgOsgiServiceHttpPortSecure", @"orgApacheFelixHttpsKeystore", @"orgApacheFelixHttpsKeystorePassword", @"orgApacheFelixHttpsKeystoreKeyPassword", @"orgApacheFelixHttpsTruststore", @"orgApacheFelixHttpsTruststorePassword", @"orgApacheFelixHttpsClientcertificate", @"orgApacheFelixHttpContextPath", @"orgApacheFelixHttpMbeans", @"orgApacheFelixHttpSessionTimeout", @"orgApacheFelixHttpJettyThreadpoolMax", @"orgApacheFelixHttpJettyAcceptors", @"orgApacheFelixHttpJettySelectors", @"orgApacheFelixHttpJettyHeaderBufferSize", @"orgApacheFelixHttpJettyRequestBufferSize", @"orgApacheFelixHttpJettyResponseBufferSize", @"orgApacheFelixHttpJettyMaxFormSize", @"orgApacheFelixHttpPathExclusions", @"orgApacheFelixHttpsJettyCiphersuitesExcluded", @"orgApacheFelixHttpsJettyCiphersuitesIncluded", @"orgApacheFelixHttpJettySendServerHeader", @"orgApacheFelixHttpsJettyProtocolsIncluded", @"orgApacheFelixHttpsJettyProtocolsExcluded", @"orgApacheFelixProxyLoadBalancerConnectionEnable", @"orgApacheFelixHttpsJettyRenegotiateAllowed", @"orgApacheFelixHttpsJettySessionCookieHttpOnly", @"orgApacheFelixHttpsJettySessionCookieSecure", @"orgEclipseJettyServletSessionIdPathParameterName", @"orgEclipseJettyServletCheckingRemoteSessionIdEncoding", @"orgEclipseJettyServletSessionCookie", @"orgEclipseJettyServletSessionDomain", @"orgEclipseJettyServletSessionPath", @"orgEclipseJettyServletMaxAge", @"orgApacheFelixHttpName", @"orgApacheFelixJettyGziphandlerEnable", @"orgApacheFelixJettyGzipMinGzipSize", @"orgApacheFelixJettyGzipCompressionLevel", @"orgApacheFelixJettyGzipInflateBufferSize", @"orgApacheFelixJettyGzipSyncFlush", @"orgApacheFelixJettyGzipExcludedUserAgents", @"orgApacheFelixJettyGzipIncludedMethods", @"orgApacheFelixJettyGzipExcludedMethods", @"orgApacheFelixJettyGzipIncludedPaths", @"orgApacheFelixJettyGzipExcludedPaths", @"orgApacheFelixJettyGzipIncludedMimeTypes", @"orgApacheFelixJettyGzipExcludedMimeTypes", @"orgApacheFelixHttpSessionInvalidate", @"orgApacheFelixHttpSessionUniqueid"];
  return [optionalProperties containsObject:propertyName];
}

@end