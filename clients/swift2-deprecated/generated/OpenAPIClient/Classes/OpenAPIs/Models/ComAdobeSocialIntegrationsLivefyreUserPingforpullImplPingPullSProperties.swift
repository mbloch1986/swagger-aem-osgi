//
// ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeSocialIntegrationsLivefyreUserPingforpullImplPingPullSProperties: JSONEncodable {
    public var communitiesIntegrationLivefyreSlingEventFilter: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["communities.integration.livefyre.sling.event.filter"] = self.communitiesIntegrationLivefyreSlingEventFilter?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
