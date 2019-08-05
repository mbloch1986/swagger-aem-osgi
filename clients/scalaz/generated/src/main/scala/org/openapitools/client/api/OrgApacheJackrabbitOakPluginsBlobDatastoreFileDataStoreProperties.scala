package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties._

case class OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties (
  `path`: Option[ConfigNodePropertyString])

object OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesCodecJson: CodecJson[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties] = CodecJson.derive[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties]
  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesDecoder: EntityDecoder[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties] = jsonOf[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties]
  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStorePropertiesEncoder: EntityEncoder[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties] = jsonEncoderOf[OrgApacheJackrabbitOakPluginsBlobDatastoreFileDataStoreProperties]
}