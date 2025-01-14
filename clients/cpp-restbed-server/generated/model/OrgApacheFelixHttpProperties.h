/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OrgApacheFelixHttpProperties.h
 *
 * 
 */

#ifndef OrgApacheFelixHttpProperties_H_
#define OrgApacheFelixHttpProperties_H_



#include "ConfigNodePropertyBoolean.h"
#include "ConfigNodePropertyDropDown.h"
#include "ConfigNodePropertyInteger.h"
#include "ConfigNodePropertyArray.h"
#include "ConfigNodePropertyString.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  OrgApacheFelixHttpProperties
{
public:
    OrgApacheFelixHttpProperties();
    virtual ~OrgApacheFelixHttpProperties();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// OrgApacheFelixHttpProperties members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpHost() const;
    void setOrgApacheFelixHttpHost(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpEnable() const;
    void setOrgApacheFelixHttpEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgOsgiServiceHttpPort() const;
    void setOrgOsgiServiceHttpPort(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpTimeout() const;
    void setOrgApacheFelixHttpTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpsEnable() const;
    void setOrgApacheFelixHttpsEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgOsgiServiceHttpPortSecure() const;
    void setOrgOsgiServiceHttpPortSecure(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpsKeystore() const;
    void setOrgApacheFelixHttpsKeystore(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpsKeystorePassword() const;
    void setOrgApacheFelixHttpsKeystorePassword(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpsKeystoreKeyPassword() const;
    void setOrgApacheFelixHttpsKeystoreKeyPassword(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpsTruststore() const;
    void setOrgApacheFelixHttpsTruststore(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpsTruststorePassword() const;
    void setOrgApacheFelixHttpsTruststorePassword(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyDropDown> getOrgApacheFelixHttpsClientcertificate() const;
    void setOrgApacheFelixHttpsClientcertificate(std::shared_ptr<ConfigNodePropertyDropDown> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpContextPath() const;
    void setOrgApacheFelixHttpContextPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpMbeans() const;
    void setOrgApacheFelixHttpMbeans(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpSessionTimeout() const;
    void setOrgApacheFelixHttpSessionTimeout(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyThreadpoolMax() const;
    void setOrgApacheFelixHttpJettyThreadpoolMax(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyAcceptors() const;
    void setOrgApacheFelixHttpJettyAcceptors(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettySelectors() const;
    void setOrgApacheFelixHttpJettySelectors(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyHeaderBufferSize() const;
    void setOrgApacheFelixHttpJettyHeaderBufferSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyRequestBufferSize() const;
    void setOrgApacheFelixHttpJettyRequestBufferSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyResponseBufferSize() const;
    void setOrgApacheFelixHttpJettyResponseBufferSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixHttpJettyMaxFormSize() const;
    void setOrgApacheFelixHttpJettyMaxFormSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixHttpPathExclusions() const;
    void setOrgApacheFelixHttpPathExclusions(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixHttpsJettyCiphersuitesExcluded() const;
    void setOrgApacheFelixHttpsJettyCiphersuitesExcluded(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixHttpsJettyCiphersuitesIncluded() const;
    void setOrgApacheFelixHttpsJettyCiphersuitesIncluded(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpJettySendServerHeader() const;
    void setOrgApacheFelixHttpJettySendServerHeader(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixHttpsJettyProtocolsIncluded() const;
    void setOrgApacheFelixHttpsJettyProtocolsIncluded(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixHttpsJettyProtocolsExcluded() const;
    void setOrgApacheFelixHttpsJettyProtocolsExcluded(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixProxyLoadBalancerConnectionEnable() const;
    void setOrgApacheFelixProxyLoadBalancerConnectionEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpsJettyRenegotiateAllowed() const;
    void setOrgApacheFelixHttpsJettyRenegotiateAllowed(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpsJettySessionCookieHttpOnly() const;
    void setOrgApacheFelixHttpsJettySessionCookieHttpOnly(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpsJettySessionCookieSecure() const;
    void setOrgApacheFelixHttpsJettySessionCookieSecure(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgEclipseJettyServletSessionIdPathParameterName() const;
    void setOrgEclipseJettyServletSessionIdPathParameterName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgEclipseJettyServletCheckingRemoteSessionIdEncoding() const;
    void setOrgEclipseJettyServletCheckingRemoteSessionIdEncoding(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgEclipseJettyServletSessionCookie() const;
    void setOrgEclipseJettyServletSessionCookie(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgEclipseJettyServletSessionDomain() const;
    void setOrgEclipseJettyServletSessionDomain(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgEclipseJettyServletSessionPath() const;
    void setOrgEclipseJettyServletSessionPath(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgEclipseJettyServletMaxAge() const;
    void setOrgEclipseJettyServletMaxAge(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyString> getOrgApacheFelixHttpName() const;
    void setOrgApacheFelixHttpName(std::shared_ptr<ConfigNodePropertyString> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixJettyGziphandlerEnable() const;
    void setOrgApacheFelixJettyGziphandlerEnable(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixJettyGzipMinGzipSize() const;
    void setOrgApacheFelixJettyGzipMinGzipSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixJettyGzipCompressionLevel() const;
    void setOrgApacheFelixJettyGzipCompressionLevel(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyInteger> getOrgApacheFelixJettyGzipInflateBufferSize() const;
    void setOrgApacheFelixJettyGzipInflateBufferSize(std::shared_ptr<ConfigNodePropertyInteger> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixJettyGzipSyncFlush() const;
    void setOrgApacheFelixJettyGzipSyncFlush(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipExcludedUserAgents() const;
    void setOrgApacheFelixJettyGzipExcludedUserAgents(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipIncludedMethods() const;
    void setOrgApacheFelixJettyGzipIncludedMethods(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipExcludedMethods() const;
    void setOrgApacheFelixJettyGzipExcludedMethods(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipIncludedPaths() const;
    void setOrgApacheFelixJettyGzipIncludedPaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipExcludedPaths() const;
    void setOrgApacheFelixJettyGzipExcludedPaths(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipIncludedMimeTypes() const;
    void setOrgApacheFelixJettyGzipIncludedMimeTypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyArray> getOrgApacheFelixJettyGzipExcludedMimeTypes() const;
    void setOrgApacheFelixJettyGzipExcludedMimeTypes(std::shared_ptr<ConfigNodePropertyArray> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpSessionInvalidate() const;
    void setOrgApacheFelixHttpSessionInvalidate(std::shared_ptr<ConfigNodePropertyBoolean> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ConfigNodePropertyBoolean> getOrgApacheFelixHttpSessionUniqueid() const;
    void setOrgApacheFelixHttpSessionUniqueid(std::shared_ptr<ConfigNodePropertyBoolean> value);

protected:
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_http_host;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_http_enable;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_osgi_service_http_port;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_timeout;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_https_enable;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_osgi_service_http_port_secure;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_https_keystore;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_https_keystore_password;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_https_keystore_key_password;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_https_truststore;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_https_truststore_password;
    std::shared_ptr<ConfigNodePropertyDropDown> m_Org_apache_felix_https_clientcertificate;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_http_context_path;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_http_mbeans;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_session_timeout;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_threadpool_max;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_acceptors;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_selectors;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_headerBufferSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_requestBufferSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_responseBufferSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_http_jetty_maxFormSize;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_http_path_exclusions;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_https_jetty_ciphersuites_excluded;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_https_jetty_ciphersuites_included;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_http_jetty_sendServerHeader;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_https_jetty_protocols_included;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_https_jetty_protocols_excluded;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_proxy_load_balancer_connection_enable;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_https_jetty_renegotiateAllowed;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_https_jetty_session_cookie_httpOnly;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_https_jetty_session_cookie_secure;
    std::shared_ptr<ConfigNodePropertyString> m_Org_eclipse_jetty_servlet_SessionIdPathParameterName;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_eclipse_jetty_servlet_CheckingRemoteSessionIdEncoding;
    std::shared_ptr<ConfigNodePropertyString> m_Org_eclipse_jetty_servlet_SessionCookie;
    std::shared_ptr<ConfigNodePropertyString> m_Org_eclipse_jetty_servlet_SessionDomain;
    std::shared_ptr<ConfigNodePropertyString> m_Org_eclipse_jetty_servlet_SessionPath;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_eclipse_jetty_servlet_MaxAge;
    std::shared_ptr<ConfigNodePropertyString> m_Org_apache_felix_http_name;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_jetty_gziphandler_enable;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_jetty_gzip_minGzipSize;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_jetty_gzip_compressionLevel;
    std::shared_ptr<ConfigNodePropertyInteger> m_Org_apache_felix_jetty_gzip_inflateBufferSize;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_jetty_gzip_syncFlush;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_excludedUserAgents;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_includedMethods;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_excludedMethods;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_includedPaths;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_excludedPaths;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_includedMimeTypes;
    std::shared_ptr<ConfigNodePropertyArray> m_Org_apache_felix_jetty_gzip_excludedMimeTypes;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_http_session_invalidate;
    std::shared_ptr<ConfigNodePropertyBoolean> m_Org_apache_felix_http_session_uniqueid;
};

}
}
}
}

#endif /* OrgApacheFelixHttpProperties_H_ */
