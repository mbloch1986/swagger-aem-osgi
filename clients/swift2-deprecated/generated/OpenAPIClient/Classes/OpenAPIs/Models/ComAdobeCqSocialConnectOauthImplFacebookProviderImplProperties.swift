//
// ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeCqSocialConnectOauthImplFacebookProviderImplProperties: JSONEncodable {
    public var oauthProviderId: ConfigNodePropertyString?
    public var oauthCloudConfigRoot: ConfigNodePropertyString?
    public var providerConfigRoot: ConfigNodePropertyString?
    public var providerConfigCreateTagsEnabled: ConfigNodePropertyBoolean?
    public var providerConfigUserFolder: ConfigNodePropertyDropDown?
    public var providerConfigFacebookFetchFields: ConfigNodePropertyBoolean?
    public var providerConfigFacebookFields: ConfigNodePropertyArray?
    public var providerConfigRefreshUserdataEnabled: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["oauth.provider.id"] = self.oauthProviderId?.encodeToJSON()
        nillableDictionary["oauth.cloud.config.root"] = self.oauthCloudConfigRoot?.encodeToJSON()
        nillableDictionary["provider.config.root"] = self.providerConfigRoot?.encodeToJSON()
        nillableDictionary["provider.config.create.tags.enabled"] = self.providerConfigCreateTagsEnabled?.encodeToJSON()
        nillableDictionary["provider.config.user.folder"] = self.providerConfigUserFolder?.encodeToJSON()
        nillableDictionary["provider.config.facebook.fetch.fields"] = self.providerConfigFacebookFetchFields?.encodeToJSON()
        nillableDictionary["provider.config.facebook.fields"] = self.providerConfigFacebookFields?.encodeToJSON()
        nillableDictionary["provider.config.refresh.userdata.enabled"] = self.providerConfigRefreshUserdataEnabled?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
