package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties._

case class OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties (
  name: Option[ConfigNodePropertyString],
title: Option[ConfigNodePropertyString],
details: Option[ConfigNodePropertyString],
enabled: Option[ConfigNodePropertyBoolean],
serviceName: Option[ConfigNodePropertyString],
logLevel: Option[ConfigNodePropertyDropDown],
queueProcessingEnabled: Option[ConfigNodePropertyBoolean],
passiveQueues: Option[ConfigNodePropertyArray],
packageExporterEndpoints: Option[ConfigNodePropertyArray],
packageImporterEndpoints: Option[ConfigNodePropertyArray],
retryStrategy: Option[ConfigNodePropertyDropDown],
retryAttempts: Option[ConfigNodePropertyInteger],
pullItems: Option[ConfigNodePropertyInteger],
httpConnTimeout: Option[ConfigNodePropertyInteger],
requestAuthorizationStrategyTarget: Option[ConfigNodePropertyString],
transportSecretProviderTarget: Option[ConfigNodePropertyString],
packageBuilderTarget: Option[ConfigNodePropertyString],
triggersTarget: Option[ConfigNodePropertyString])

object OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryPropertiesCodecJson: CodecJson[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties] = CodecJson.derive[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties]
  implicit val OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryPropertiesDecoder: EntityDecoder[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties] = jsonOf[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties]
  implicit val OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryPropertiesEncoder: EntityEncoder[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties] = jsonEncoderOf[OrgApacheSlingDistributionAgentImplSyncDistributionAgentFactoryProperties]
}
