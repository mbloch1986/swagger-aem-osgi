//
// OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheJackrabbitOakPluginsObservationChangeCollectorProviderProperties: Codable {

    public var maxItems: ConfigNodePropertyInteger?
    public var maxPathDepth: ConfigNodePropertyInteger?
    public var enabled: ConfigNodePropertyBoolean?

    public init(maxItems: ConfigNodePropertyInteger?, maxPathDepth: ConfigNodePropertyInteger?, enabled: ConfigNodePropertyBoolean?) {
        self.maxItems = maxItems
        self.maxPathDepth = maxPathDepth
        self.enabled = enabled
    }


}
