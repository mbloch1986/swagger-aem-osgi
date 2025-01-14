//
// ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComDayCqWcmMobileCoreImplDeviceDeviceInfoTransformerFactoryProperties: Codable {

    public var deviceInfoTransformerEnabled: ConfigNodePropertyBoolean?
    public var deviceInfoTransformerCssStyle: ConfigNodePropertyString?

    public init(deviceInfoTransformerEnabled: ConfigNodePropertyBoolean?, deviceInfoTransformerCssStyle: ConfigNodePropertyString?) {
        self.deviceInfoTransformerEnabled = deviceInfoTransformerEnabled
        self.deviceInfoTransformerCssStyle = deviceInfoTransformerCssStyle
    }

    public enum CodingKeys: String, CodingKey { 
        case deviceInfoTransformerEnabled = "device.info.transformer.enabled"
        case deviceInfoTransformerCssStyle = "device.info.transformer.css.style"
    }


}

