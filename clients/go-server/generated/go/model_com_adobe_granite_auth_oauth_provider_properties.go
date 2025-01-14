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

type ComAdobeGraniteAuthOauthProviderProperties struct {

	OauthConfigId *ConfigNodePropertyString `json:"oauth.config.id,omitempty"`

	OauthClientId *ConfigNodePropertyString `json:"oauth.client.id,omitempty"`

	OauthClientSecret *ConfigNodePropertyString `json:"oauth.client.secret,omitempty"`

	OauthScope *ConfigNodePropertyArray `json:"oauth.scope,omitempty"`

	OauthConfigProviderId *ConfigNodePropertyString `json:"oauth.config.provider.id,omitempty"`

	OauthCreateUsers *ConfigNodePropertyBoolean `json:"oauth.create.users,omitempty"`

	OauthUseridProperty *ConfigNodePropertyString `json:"oauth.userid.property,omitempty"`

	ForceStrictUsernameMatching *ConfigNodePropertyBoolean `json:"force.strict.username.matching,omitempty"`

	OauthEncodeUserids *ConfigNodePropertyBoolean `json:"oauth.encode.userids,omitempty"`

	OauthHashUserids *ConfigNodePropertyBoolean `json:"oauth.hash.userids,omitempty"`

	OauthCallBackUrl *ConfigNodePropertyString `json:"oauth.callBackUrl,omitempty"`

	OauthAccessTokenPersist *ConfigNodePropertyBoolean `json:"oauth.access.token.persist,omitempty"`

	OauthAccessTokenPersistCookie *ConfigNodePropertyBoolean `json:"oauth.access.token.persist.cookie,omitempty"`

	OauthCsrfStateProtection *ConfigNodePropertyBoolean `json:"oauth.csrf.state.protection,omitempty"`

	OauthRedirectRequestParams *ConfigNodePropertyBoolean `json:"oauth.redirect.request.params,omitempty"`

	OauthConfigSiblingsAllow *ConfigNodePropertyBoolean `json:"oauth.config.siblings.allow,omitempty"`
}
