/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * API version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type OrgApacheFelixHttpProperties struct {
	OrgApacheFelixHttpHost ConfigNodePropertyString `json:"org.apache.felix.http.host,omitempty"`
	OrgApacheFelixHttpEnable ConfigNodePropertyBoolean `json:"org.apache.felix.http.enable,omitempty"`
	OrgOsgiServiceHttpPort ConfigNodePropertyInteger `json:"org.osgi.service.http.port,omitempty"`
	OrgApacheFelixHttpTimeout ConfigNodePropertyInteger `json:"org.apache.felix.http.timeout,omitempty"`
	OrgApacheFelixHttpsEnable ConfigNodePropertyBoolean `json:"org.apache.felix.https.enable,omitempty"`
	OrgOsgiServiceHttpPortSecure ConfigNodePropertyInteger `json:"org.osgi.service.http.port.secure,omitempty"`
	OrgApacheFelixHttpsKeystore ConfigNodePropertyString `json:"org.apache.felix.https.keystore,omitempty"`
	OrgApacheFelixHttpsKeystorePassword ConfigNodePropertyString `json:"org.apache.felix.https.keystore.password,omitempty"`
	OrgApacheFelixHttpsKeystoreKeyPassword ConfigNodePropertyString `json:"org.apache.felix.https.keystore.key.password,omitempty"`
	OrgApacheFelixHttpsTruststore ConfigNodePropertyString `json:"org.apache.felix.https.truststore,omitempty"`
	OrgApacheFelixHttpsTruststorePassword ConfigNodePropertyString `json:"org.apache.felix.https.truststore.password,omitempty"`
	OrgApacheFelixHttpsClientcertificate ConfigNodePropertyDropDown `json:"org.apache.felix.https.clientcertificate,omitempty"`
	OrgApacheFelixHttpContextPath ConfigNodePropertyString `json:"org.apache.felix.http.context_path,omitempty"`
	OrgApacheFelixHttpMbeans ConfigNodePropertyBoolean `json:"org.apache.felix.http.mbeans,omitempty"`
	OrgApacheFelixHttpSessionTimeout ConfigNodePropertyInteger `json:"org.apache.felix.http.session.timeout,omitempty"`
	OrgApacheFelixHttpJettyThreadpoolMax ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.threadpool.max,omitempty"`
	OrgApacheFelixHttpJettyAcceptors ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.acceptors,omitempty"`
	OrgApacheFelixHttpJettySelectors ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.selectors,omitempty"`
	OrgApacheFelixHttpJettyHeaderBufferSize ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.headerBufferSize,omitempty"`
	OrgApacheFelixHttpJettyRequestBufferSize ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.requestBufferSize,omitempty"`
	OrgApacheFelixHttpJettyResponseBufferSize ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.responseBufferSize,omitempty"`
	OrgApacheFelixHttpJettyMaxFormSize ConfigNodePropertyInteger `json:"org.apache.felix.http.jetty.maxFormSize,omitempty"`
	OrgApacheFelixHttpPathExclusions ConfigNodePropertyArray `json:"org.apache.felix.http.path_exclusions,omitempty"`
	OrgApacheFelixHttpsJettyCiphersuitesExcluded ConfigNodePropertyArray `json:"org.apache.felix.https.jetty.ciphersuites.excluded,omitempty"`
	OrgApacheFelixHttpsJettyCiphersuitesIncluded ConfigNodePropertyArray `json:"org.apache.felix.https.jetty.ciphersuites.included,omitempty"`
	OrgApacheFelixHttpJettySendServerHeader ConfigNodePropertyBoolean `json:"org.apache.felix.http.jetty.sendServerHeader,omitempty"`
	OrgApacheFelixHttpsJettyProtocolsIncluded ConfigNodePropertyArray `json:"org.apache.felix.https.jetty.protocols.included,omitempty"`
	OrgApacheFelixHttpsJettyProtocolsExcluded ConfigNodePropertyArray `json:"org.apache.felix.https.jetty.protocols.excluded,omitempty"`
	OrgApacheFelixProxyLoadBalancerConnectionEnable ConfigNodePropertyBoolean `json:"org.apache.felix.proxy.load.balancer.connection.enable,omitempty"`
	OrgApacheFelixHttpsJettyRenegotiateAllowed ConfigNodePropertyBoolean `json:"org.apache.felix.https.jetty.renegotiateAllowed,omitempty"`
	OrgApacheFelixHttpsJettySessionCookieHttpOnly ConfigNodePropertyBoolean `json:"org.apache.felix.https.jetty.session.cookie.httpOnly,omitempty"`
	OrgApacheFelixHttpsJettySessionCookieSecure ConfigNodePropertyBoolean `json:"org.apache.felix.https.jetty.session.cookie.secure,omitempty"`
	OrgEclipseJettyServletSessionIdPathParameterName ConfigNodePropertyString `json:"org.eclipse.jetty.servlet.SessionIdPathParameterName,omitempty"`
	OrgEclipseJettyServletCheckingRemoteSessionIdEncoding ConfigNodePropertyBoolean `json:"org.eclipse.jetty.servlet.CheckingRemoteSessionIdEncoding,omitempty"`
	OrgEclipseJettyServletSessionCookie ConfigNodePropertyString `json:"org.eclipse.jetty.servlet.SessionCookie,omitempty"`
	OrgEclipseJettyServletSessionDomain ConfigNodePropertyString `json:"org.eclipse.jetty.servlet.SessionDomain,omitempty"`
	OrgEclipseJettyServletSessionPath ConfigNodePropertyString `json:"org.eclipse.jetty.servlet.SessionPath,omitempty"`
	OrgEclipseJettyServletMaxAge ConfigNodePropertyInteger `json:"org.eclipse.jetty.servlet.MaxAge,omitempty"`
	OrgApacheFelixHttpName ConfigNodePropertyString `json:"org.apache.felix.http.name,omitempty"`
	OrgApacheFelixJettyGziphandlerEnable ConfigNodePropertyBoolean `json:"org.apache.felix.jetty.gziphandler.enable,omitempty"`
	OrgApacheFelixJettyGzipMinGzipSize ConfigNodePropertyInteger `json:"org.apache.felix.jetty.gzip.minGzipSize,omitempty"`
	OrgApacheFelixJettyGzipCompressionLevel ConfigNodePropertyInteger `json:"org.apache.felix.jetty.gzip.compressionLevel,omitempty"`
	OrgApacheFelixJettyGzipInflateBufferSize ConfigNodePropertyInteger `json:"org.apache.felix.jetty.gzip.inflateBufferSize,omitempty"`
	OrgApacheFelixJettyGzipSyncFlush ConfigNodePropertyBoolean `json:"org.apache.felix.jetty.gzip.syncFlush,omitempty"`
	OrgApacheFelixJettyGzipExcludedUserAgents ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.excludedUserAgents,omitempty"`
	OrgApacheFelixJettyGzipIncludedMethods ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.includedMethods,omitempty"`
	OrgApacheFelixJettyGzipExcludedMethods ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.excludedMethods,omitempty"`
	OrgApacheFelixJettyGzipIncludedPaths ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.includedPaths,omitempty"`
	OrgApacheFelixJettyGzipExcludedPaths ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.excludedPaths,omitempty"`
	OrgApacheFelixJettyGzipIncludedMimeTypes ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.includedMimeTypes,omitempty"`
	OrgApacheFelixJettyGzipExcludedMimeTypes ConfigNodePropertyArray `json:"org.apache.felix.jetty.gzip.excludedMimeTypes,omitempty"`
	OrgApacheFelixHttpSessionInvalidate ConfigNodePropertyBoolean `json:"org.apache.felix.http.session.invalidate,omitempty"`
	OrgApacheFelixHttpSessionUniqueid ConfigNodePropertyBoolean `json:"org.apache.felix.http.session.uniqueid,omitempty"`
}
