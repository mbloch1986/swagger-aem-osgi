//
// ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties: Codable {

    public var name: ConfigNodePropertyString?
    public var locale: ConfigNodePropertyString?
    public var imsConfig: ConfigNodePropertyString?

    public init(name: ConfigNodePropertyString?, locale: ConfigNodePropertyString?, imsConfig: ConfigNodePropertyString?) {
        self.name = name
        self.locale = locale
        self.imsConfig = imsConfig
    }


}

