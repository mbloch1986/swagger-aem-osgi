package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties._

case class OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties (
  datasourceName: Option[ConfigNodePropertyString],
datasourceSvcPropName: Option[ConfigNodePropertyString],
datasourceJndiName: Option[ConfigNodePropertyString],
jndiProperties: Option[ConfigNodePropertyArray])

object OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingDatasourceJNDIDataSourceFactoryPropertiesCodecJson: CodecJson[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties] = CodecJson.derive[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties]
  implicit val OrgApacheSlingDatasourceJNDIDataSourceFactoryPropertiesDecoder: EntityDecoder[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties] = jsonOf[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties]
  implicit val OrgApacheSlingDatasourceJNDIDataSourceFactoryPropertiesEncoder: EntityEncoder[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties] = jsonEncoderOf[OrgApacheSlingDatasourceJNDIDataSourceFactoryProperties]
}
