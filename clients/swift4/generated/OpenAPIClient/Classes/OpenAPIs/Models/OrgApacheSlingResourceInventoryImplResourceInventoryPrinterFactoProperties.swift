//
// OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingResourceInventoryImplResourceInventoryPrinterFactoProperties: Codable {

    public var felixInventoryPrinterName: ConfigNodePropertyString?
    public var felixInventoryPrinterTitle: ConfigNodePropertyString?
    public var path: ConfigNodePropertyString?

    public init(felixInventoryPrinterName: ConfigNodePropertyString?, felixInventoryPrinterTitle: ConfigNodePropertyString?, path: ConfigNodePropertyString?) {
        self.felixInventoryPrinterName = felixInventoryPrinterName
        self.felixInventoryPrinterTitle = felixInventoryPrinterTitle
        self.path = path
    }

    public enum CodingKeys: String, CodingKey { 
        case felixInventoryPrinterName = "felix.inventory.printer.name"
        case felixInventoryPrinterTitle = "felix.inventory.printer.title"
        case path
    }


}

